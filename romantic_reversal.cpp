#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(k==1)
        cout<<s<<"\n";
        else{
        for(int i=k-1;i>1;i--){
        reverse(s.begin(),s.begin()+i);
        }
        }
        cout<<s<<"\n";
    }
}