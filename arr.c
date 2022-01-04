#include<stdio.h>
int main(){
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int i;
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr1[10];
    int arr2[10];
    int negative=0,postive=0;
    int temp[10];
    // for(i=0;i<size;i++){
    //     if(arr[i]>=0){
    //     arr[postive];
    //     postive++;
    //     }
    //     else{
    //     arr[negative];
    //     negative++;
    //     }
    // }
    int j=0;
    for(i=0;i<size;i++){
         if(arr<0){
             if(i!=j)
             temp[i]=arr[i];        
         arr[j]=arr[i];
         j++;
         }
         j=j+2;
    }
    printf("%d",j);
}