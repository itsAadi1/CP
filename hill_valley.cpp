#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int i;
        int tot;
        int it;
        tot=n+m+2;
        cout<<tot<<"\n";
        int arr[tot];
        it=n*2;
        for(i=2;i<=it;i=i+2)
            arr[i]=1;
         for(i=1;i<=it+1;i=i+2)
            arr[i]=0;
             for(i=1;i<=tot;i++)
            cout<<arr[i];
    }
    cout<<"\n";
}