#include<stdio.h>
int hcf(int a,int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    return hcf(b,a%b);
}
int main(){
    printf("%d",hcf(30,18));
}