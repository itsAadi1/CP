#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if(a==p && b==q){
            cout<<"0"<<"\n";
        }
       else if((a+b)%2==0 && (p+q)%2==0  || (a+b)%2!=0 && (p+q)%2!=0)
       cout<<"2\n";
       else
       cout<<"1\n";
    }
}