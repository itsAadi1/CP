#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
} *root = NULL;

struct queue
{
  int front;
  int rear;
  int size;
  struct queue **Q;
};

int isempty(struct queue *q)
{
  if (q->front == -1)
    return 1;
  return 0;
}

void create_queue(struct queue *q, int n)
{
  q->size = n;
  q->front = q->rear = -1;
  q->Q = malloc(q->size * sizeof(struct node *));
}
void enqueue(struct queue *q, struct node *n)
{
  if (q->front == -1)
    q->front=(q->front+1)%q->size;
  q->rear=(q->rear+1) % q->size;
  q->Q[q->rear] = n;
}
struct node *dequeue(struct queue *q)
{
  struct node *p = NULL;
  p = q->Q[q->front];
  q->front=(q->front+1) % q->size;
  return p;
}
int Tree_create()
{
  int n;
  struct node *p, *t;
  printf("Enter the number of node:\n");
  scanf("%d", &n);
  struct queue q;
  create_queue(&q, n);
  printf("Enter root node:\n");
  scanf("%d", &n);
  root = malloc(sizeof(struct node));
  root->left = root->right = NULL;
  enqueue(&q, root);
  while (!isempty(&q))
  {
    p = dequeue(&q);
    printf("Enter left child of %d\n", p->data);
    scanf("%d", &n);
    if (n != -1)
    {
      t = malloc(sizeof(struct node));
      t->data = n;
      t->left = t->right = NULL;
       p->left = t;
      enqueue(&q, t);
    }
    printf("Enter right child of %d\n", p->data);
    scanf("%d", &n);
    if (n != -1)
    {
      t = malloc(sizeof(struct node));
      t->data = n;
      t->left = t->right = NULL;
            p->right = t;
      enqueue(&q, t);
    }
  }
}
void preorder(struct node *p)
{
  if (p)
  {
    printf("%d ", p->data);
    preorder(p->left);
    preorder(p->right);
  }
}

int main()
{
  Tree_create();
  preorder(root);
}