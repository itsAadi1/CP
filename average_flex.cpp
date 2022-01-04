#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,more=0,less=0,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=n;j++){
                if(a[i]>=a[j])
                less++;
                else
                more++;
            }
            if(less>more)
            count++;
        }
        cout<<count<<endl;

    }
}