#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int step=0,i,k;
        cin>>k;
        for(i=1;i<=k;i++){
            if(i%2!=0)
            step=step+3;
            else
            step=step-1;
        }
        cout<<step<<endl;
    }
}