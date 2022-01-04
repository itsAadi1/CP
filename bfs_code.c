#include<stdio.h>
#include<stdlib.h>
struct queue{
  int *arr;
  int front;
  int rear;
};
int isempty(struct queue *q){
    if(q->rear==-1)
    return 1;
    return 0;
}
int isfull(struct queue *q){
    if(q->rear==100)
    return 1;
    return 0;
}
void enqueue(struct queue *q,int data){
    if(isfull(q))
    printf("Queue is full\n");
else{
    if(q->front==-1)
        q->front++;
        q->rear++;
        q->arr[q->rear]=data;
    }
}

int dequeue(struct queue *q){
    if(isempty(q))
    printf("Queue is empty\n");
    else{
        int a=q->arr[q->front++];
        return a;
    }
}
int bfs(int n,int **);
// int dfs(int n,int **);
int main(){
    int i,j;
    int n;
    printf("\nEnter number of vertices:");
    scanf("%d",&n);
    int **a=malloc((n+1)*sizeof(int *));
    for(i=1;i<=n+1;i++)
    a[i]=malloc(n*sizeof(int));
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("\nEnter 1 if %d has node with %d else 0:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Adjacency Matrix is:\n");
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    bfs(n,a);
    // dfs(n,a);
}

int bfs(int n,int **a){
    struct queue q;
    q.arr=*a;
    q.front=q.rear=-1;
    // int visited[4]={0,0,0,0};
    int *visited=calloc((n+1),sizeof(int));
    int s;
    int i;
   printf("Enter source vertex:");
   scanf("%d",&s);
   printf("%d ",s);
   visited[s]=1;
   enqueue(&q,s);
   while(!isempty(&q)){
       int u=dequeue(&q);
   for(i=1;i<=n;i++){
       if(a[u][i]==1 && visited[i]==0){
           printf("%d ",i);
           visited[i]=1;
           enqueue(&q,i);
       }
   }
   }
}

// int dfs(int n,int **a){
//     int c;
//     printf("Enter soucre vertex:");
//     scanf("%d",&c);
//     int visited[4]={0};
//     visited[c]=1;
//     for(int i=1;i<=n;i++){
//         if(a[c][]==1 && visited[i]===)
//       printf("%d ",)
//     }
// }