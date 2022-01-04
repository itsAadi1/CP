#include<stdio.h>
#include<stdlib.h>
int main(){
    int **a=malloc(2*sizeof(int*));
    int **b=malloc(2*sizeof(int*));
    int i,j;
    for(i=1;i<=2;i++){
        a[i]=malloc(2*sizeof(int));
        b[i]=malloc(2*sizeof(int));
    }
    printf("Enter elements matrix A(2x2):\n");
    for(i=1;i<=2;i++){
        for(j=1;j<=2;j++)
      scanf("%d",&a[i][j]);
    }
      printf("Enter elements matrix B(2x2):\n");
     for(i=1;i<=2;i++){
        for(j=1;j<=2;j++)
      scanf("%d",&b[i][j]);
    }
    printf("Multilpication of AxB is:\n");
    for(i=1;i<=2;i++){
        int sum=0;
        for(j=1;j<=2;j++){
           sum=sum+a[i][j]*b[i][j];
        }
        printf("%d ",sum);
        printf("\n");
    }
}