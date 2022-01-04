#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,i,count=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
        count++;
    }
    cout<<n-count<<"\n";
}
}