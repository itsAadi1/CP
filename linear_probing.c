#include<stdio.h>
#include<stdlib.h>
#define size 10
int hash(int key){
    return key % size;
}

int probe(int ht[],int key){
    int index=hash(key);
    int i=0;
    while(ht[(index+i)%size]!=0)
    i++;
    return (index+i)%size;
}

int insert(int ht[],int key){
   int index=hash(key);
  int i=0;
   if(ht[index]!=0)
   index=probe(ht,key);
   ht[index]=key;
}

int search(int ht[],int key){
    int index=hash(key);
    int i=0;
    while(ht[(index+i)%size]!=key && i<size)
    i++;
    if(i<size)
    return (index+i)%size;
    return -1;
}

int main(){
    int ht[10]={0};
    insert(ht,3);
    insert(ht,8);
    insert(ht,9);
    insert(ht,19);
    insert(ht,89);
    insert(ht,77);
    printf("Element found at position %d ",search(ht,76));
}