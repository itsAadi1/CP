#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,c=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%3!=0)
            c++;
        }
         if(c==0){
             cout<<"0\n";
         }
         else if(c>0 && c!=2){
         cout<<"-1\n";
         }
         int arr1[2];
         int j=0;
    for(i=0;i<n;i++){
     if(arr[i]>0 && arr[i]%3!=0){
         arr1[j]=arr[i];
         j++;
     }
    }
    if((arr1[0]+1)%3==0 && (arr1[1]-1)%3==0)
    cout<<"1\n";
   else if((arr1[0]-1)%3==0 && (arr1[1]+1)%3==0)
    cout<<"1\n";
    else 
    cout<<"-1\n";
    }
}