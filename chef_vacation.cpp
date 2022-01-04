#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y)<z)
        cout<<"PLANEBUS\n";
        else if(z<(x+y))
        cout<<"TRAIN\n";
        else
        cout<<"EQUAL\n";
    }
}