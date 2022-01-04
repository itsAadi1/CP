#include<stdio.h>
#include<stdlib.h>

struct doubly{
    struct doubly *prev;
    int data;
    struct doubly *next;
}*head=NULL;
int insert_data(int n){
    struct doubly *new_node;
    struct doubly *ptr;
    new_node=malloc(sizeof(struct doubly));
    new_node->data=n;
    if(head==NULL){
        head=new_node;
        // head->data=new_node->data;
        head->prev=head->next=NULL;
        // ptr=new_node;
    }
    else{
        head->next=new_node;
        new_node->prev=head;
        head=new_node;
        head->next=NULL;
               // ptr=new_node;
    }
}

int disp_all(){
    struct doubly *ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->prev;
    }
    printf("\n");
}
int main(){
    int ch,n;
    while(1){
        printf("1.Insert Element\n2.Display Members\n3.To Sort\n4.Display all data\n5.Count Average\n6.Exit\n");
        printf("Enter Your Choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("\nEnter Element to insert:\n");
            scanf("%d",&n);
            insert_data(n);
            break;
            case 2:
            // disp_memb();
            break;
            case 3:
            // sort();
            break;
            case 4:
            disp_all();
            break;
            case 5:
            // count_avg();
            case 6:
            exit(1);
            default:
            printf("\nWrong Choice\n");
            break;
        }
    }
}