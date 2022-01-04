#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==0 || y==0)
        cout<<"NO\n";
        else if(x+y<=z)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}