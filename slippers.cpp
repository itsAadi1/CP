#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,x,paisa;
        cin>>n>>l>>x;
        if(l==0)
        paisa=l*x;
       else if((n-l)>=l)
        paisa=l*x;
        else
        paisa=(n-l)*x;
    cout<<paisa<<endl;
    }
}