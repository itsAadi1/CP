#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i,flag=0,x,k=0;
        cin>>n;
        int *arr=(int*)malloc(n*sizeof(int));
        int *ptr=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++){
         cin>>*(arr+i);
        }
        for(i=0;i<n;i++){
         *(ptr+i)=*(arr+i)+k;
        }
        for(i=0;i)
    }
}