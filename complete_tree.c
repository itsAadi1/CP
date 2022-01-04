#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};
struct Node *root;
struct queue
{
    int size;
    int rear;
    int front;
    struct Node **Q;
};

int IsEmpty(struct queue *p)
{
    if (p->front == p->rear)
        return 1;
    return 0;
}

int IsFull(struct queue *q)
{
    return (q->rear + 1) % (q->size) == q->front;
}
void create_queue(struct queue *p, int size)
{
    p->rear = p->front = 0;
    p->size = size;
    p->Q = (struct Node **)malloc(size * sizeof(struct Node *));
}
int enqueue(struct queue *q, struct Node *p)
{
    if (IsFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = p;
    }
}

struct Node *dequeue(struct queue *p)
{
    struct Node *q = NULL;
    if (IsEmpty(p))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        p->front = (p->front + 1) % p->size;
        q = p->Q[p->front];
    }
    return q;
}

int Tree_Create()
{
    struct Node *x;
    struct Node *child;
    int n;
    printf("Enter number of nodes:\n");
    scanf("%d", &n);
    struct queue q;
    create_queue(&q, n);
    printf("Enter root node:\n");
    scanf("%d", &n);
    root = malloc(sizeof(struct Node));
    root->data = n;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!IsEmpty(&q))
    {
        x = dequeue(&q);
        printf("Enter Left Child Of %d(-1 if doesn't exist)\n", x->data);
        scanf("%d", &n);
        if (n != -1)
        {
            child = malloc(sizeof(struct Node));
            child->data = n;
            child->lchild = child->rchild = NULL;
            x->lchild = child;
            enqueue(&q, child);
        }
        printf("Enter Right Child Of %d(-1 if doesn't exist)\n", x->data);
        scanf("%d", &n);
        if (n != -1)
        {
            child = malloc(sizeof(struct Node));
            child->data = n;
            child->lchild = child->rchild = NULL;
            x->rchild = child;
            enqueue(&q, child);
        }
    }
}

int PreOrder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}
int InOrder(struct Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        printf("%d ", p->data);
        InOrder(p->rchild);
    }
}
int PostOrder(struct Node *p)
{
    if (p)
    {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        printf("%d ", p->data);
    }
}
int main()
{
    Tree_Create();
    printf("------PreOrder Traversal of Tree-----\n");
    PreOrder(root);
    printf("\n------InOrder Traversal of Tree-----\n");
    InOrder(root);
    printf("\n------PostOrder Traversal of Tree-----\n");
    PostOrder(root);
}