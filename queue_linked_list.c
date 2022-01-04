#include<stdio.h>
#include<stdlib.h>
struct queue *f=NULL;
struct queue *r=NULL;
struct queue{
    int data;
    struct queue* next;
};
// struct queue *f=NULL;
// struct queue *r=NULL;

int enqueue();
int dequeue();
int dispQueue();

int main(){
    int choice;
    while(1){
        printf("1.To enqueue\n2.To dequeue\n3.To print the element in queue\n4.To exit\n");
          printf("Enter Your Choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        enqueue();
        break;
        case 2:
       printf("Dequeueing element %d\n",dequeue());
        break;
        case 3:
        dispQueue();
        break;
        case 4:
        exit(1);
        default:
        printf("Wrong choice\n");
    }
    }
}

int enqueue(){
    int n;
    printf("Enter number to enqueue:");
    scanf("%d",&n);
    struct queue *head=malloc(sizeof(struct queue));
    if(head==NULL){
        printf("Queue is full");
    }
    else{
    head->data=n;
    head->next=NULL;
    if(f==NULL){
        f=r=head;
    }
    else{
        r->next=head;
        r=head;
    }
    }
}

int dequeue(){
    struct queue *temp;
    temp=f;
    f=f->next;
    int val=temp->data;
    free(temp);
    return val;
}

int dispQueue(){
    struct queue *temp;
    temp=f;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
