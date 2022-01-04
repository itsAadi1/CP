#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,one,two;
        cin>>x>>y;
       one=1*x;
       two=2*y;
        if((one+two)%2==0){
         if(x==0 && y==1)
         cout<<"NO\n";
         else
         cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}