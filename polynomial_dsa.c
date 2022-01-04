#include<stdio.h>
#include<stdlib.h>

struct poly
{
    float coefficient;
    int degree;
    struct poly* next;
};

void display(struct poly* P)
{
	if(P)
	{
	    if(P->degree == 0)
	        printf("%0.1f ", P->coefficient);
	    else
	    	printf("%0.1fx^%d ", P->coefficient, P->degree);
	    P = P->next;
	    if(P && P->coefficient >= 0)
	    	printf("+ ");
	    while(P)
	    {
	        printf("%0.1fx^%d ", P->coefficient, P->degree);
	        P = P->next;
	        if(P && P->coefficient >= 0)
	    	printf("+ ");
	    }
	}
}

void free_all(struct poly** hptr)
{
    while(*hptr)
    {
        struct poly* next = (*hptr)->next;
        free(*hptr);
        (*hptr) = next;
    }
}

void compress(struct poly** hptr)           //get rid of all terms with 0 coefficients
{	
	while((*hptr)->coefficient == 0)
    {
        struct poly* next = (*hptr)-> next;
        free(*hptr);
        *hptr = next;
    }

    struct poly* ptr = (*hptr)->next;
    struct poly* prev = *hptr;
    
    while(ptr)
    {
	    while(ptr && ptr->coefficient)
	    {
	    	prev = ptr;
	    	ptr = ptr->next;
		}
		
		if(ptr && ptr->coefficient == 0)
		{
		    prev->next = ptr->next;
		    free(ptr);
		    ptr = prev->next;
		}
	}
}

struct poly* make_term(int degree, int coefficient)
{
    struct poly* term = malloc(sizeof(*term));
    if(term)
    {
        term->coefficient = coefficient;
        term->degree = degree;
        term->next = NULL;

        return term;
    }
    printf("Failed to allocate memory.");
    return NULL;
}

struct poly* make_poly(int degree)
{
    struct poly* head = make_term(0, 0);
    struct poly* ptr = head;

    for(int i = 1; i <= degree; ++i)
    {
        ptr -> next = make_term(i, 0);
        
        if(ptr -> next)
            ptr = ptr-> next;
        else
        {
            free_all(&head);
            return NULL;
        }
    }

    return head;
}

struct poly* make_and_input_poly(int degree)
{
    if(degree < 0)
    {
        printf("Degree must be a non-negative number.");
        return NULL;
    }
    
    struct poly* head = NULL;
    struct poly* ptr = NULL;
    
    float coeff;

    for(int i = 0; i < degree; ++i)
    {
        printf("Enter coefficient for the x^%dth term: ", i);
        scanf("%f", &coeff);
        if(ptr)
        {
            ptr->next = make_term(i, coeff);
            if(!ptr->next)
            {
                free_all(&head);
                return head;
            }
            ptr = ptr->next;
        }
        else
        {
            head = make_term(i, coeff);
            if(!head)
            {
                printf("Failed to allocate memory for the x^%d-th term.\n", i);
                free_all(&head);
                return head;
            }
            ptr = head;
        }
    }
	
    struct poly* last = make_term(degree, 0);
    if(!last)
    {
        if(head)
            free_all(&head);

        return NULL;
    }
    
    if(ptr)
    {
        ptr->next = last;
        ptr = last;
    }
    else
    {
        head = last;
        ptr = last;
    }

    do
    {
        printf("Enter coefficient for the x^%dth term: ", degree);
        scanf("%f", &coeff);
        if(coeff == 0)
            printf("Coefficient of highest degree term cannot be zero.\n");
    }while(coeff == 0);

    ptr->coefficient = coeff;
    ptr->next = NULL;

    return head;
}

struct poly* multiply(struct poly* a, int a_deg, struct poly* b, int b_deg)
{
    //Since main() alreay checks that a and b are not NULL, no checking is done for them
    struct poly* head = NULL;
    struct poly* ptr = NULL;

    int m_deg = a_deg + b_deg;
    
    for(int i = 0; i <= m_deg; ++i)
    {
        if(!head)
        {
            head = calloc(1, sizeof(struct poly));
            if(!head)
            {
                printf("Failed to allocate head of product.");
                return NULL;
            }
            head->degree = i;
            ptr = head;
        }
        else
        {
            ptr->next = calloc(1, sizeof(struct poly));
            if(!ptr->next)
            {
                printf("Failed to allocate terms for product.");
                free_all(&head);
                return NULL;
            }
            ptr->next->degree = i;
            ptr = ptr->next;
        }
    }
	ptr = NULL;
	
    while(a)
    {
        struct poly* b_copy = b;
        while(b_copy)
        {
            ptr = head;

            while(ptr->degree != a->degree + b_copy->degree)
				ptr = ptr->next;

            ptr->coefficient += a->coefficient * b_copy->coefficient;

            b_copy = b_copy -> next;
        }
        a = a->next;
    }
    
    compress(&head);
    
    return head;
}

struct poly* add(struct poly* p, int p_deg, struct poly*q, int q_deg)
{
    int max_deg = p_deg > q_deg ? p_deg : q_deg;

    struct poly* ans = make_poly(max_deg);
    struct poly* ptr = ans;
	if(ans)
    {
        while(p && q)
        {
            ptr->coefficient = p->coefficient + q->coefficient;   
			
            p = p->next;
            q = q->next;
            ptr = ptr->next;
        }

        while(p)
        {
            ptr->coefficient = p->coefficient;
            ptr->degree = p->degree;

            p = p->next;
            ptr = ptr->next;
        }
		
        while(q)
        {
            ptr->coefficient = q->coefficient;
            ptr->degree = q->degree;

            q = q->next;
            ptr = ptr->next;
        }
		
        compress(&ans);

        return ans;                                 
    }
    return NULL;
}

struct poly* sub(struct poly* p, int p_deg, struct poly*q, int q_deg)   // p - q
{
    int max_deg = p_deg > q_deg ? p_deg : q_deg;

    struct poly* ans = make_poly(max_deg);
    struct poly* ptr = ans;
	if(ans)
    {
        while(p && q)
        {
            ptr->coefficient = p->coefficient - q->coefficient;   
			
            p = p->next;
            q = q->next;
            ptr = ptr->next;
        }

        while(p)
        {
            ptr->coefficient = p->coefficient;

            p = p->next;
            ptr = ptr->next;
        }
		
        while(q)
        {
            ptr->coefficient = -(q->coefficient);

            q = q->next;
            ptr = ptr->next;
        }

        compress(&ans);

        return ans;                                 
    }
    return NULL;
}

int main()
{
    printf("Enter degree of polynomial 1: ");
    int p_deg;
    scanf("%d", &p_deg);

    struct poly* p = make_and_input_poly(p_deg);
    if(!p)
    	return 0;

    printf("\nEnter degree of polynomial 2: ");
    int q_deg;
    scanf("%d", &q_deg);

    struct poly* q = make_and_input_poly(q_deg);
    if(!q)
    {
        free_all(&p);
        return 0;
    }
    
    struct poly* pq = multiply(p, p_deg, q, q_deg);
    if(!pq)
    {
        free_all(&p);
        free_all(&q);
        return 0;
    }
    int pq_deg = p_deg + q_deg;

    struct poly* sum = add(p, p_deg, q, q_deg);
    if(!sum)
    {
        free_all(&p);
        free_all(&q);
        free_all(&pq);
        return 0;
    }
    int sum_deg = p_deg > q_deg? p_deg : q_deg;

    struct poly* diff = sub(p, p_deg, q, q_deg);
    if(!sub)
    {
        free_all(&p);
        free_all(&q);
        free_all(&pq);
        free_all(&sum);
        return 0;
    }
    int diff_deg = p_deg > q_deg? p_deg : q_deg;
    
    compress(&p);
    compress(&q);
    
    printf("\nP(x):\t\t");
    display(p);
    printf("\nQ(x):\t\t");
    display(q);
    printf("\nP(x) + Q(x):\t");
    display(sum);
    printf("\nP(x) - Q(x):\t");
    display(diff);
    printf("\nP(x) * Q(x):\t");
    display(pq);
    
    free_all(&p);
    free_all(&q);
    free_all(&pq);
    free_all(&sum);
    free_all(&diff);
    free_all(&pq);
    
	return 0;
}
