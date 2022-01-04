#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
   cin>>t;
    while(t--){
        int n,x,p,m,t;
        cin>>n>>x>>p;
        m=3*x;
        t=m-(n-x)*1;
        if(t>=p)
        cout<<"PASS"<<endl;
        else
        cout<<"FAIL"<<endl;
    }
}