#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')
            zero++;
            else
            one++;
        }
        int substring=1;
        if(zero>=2 && one>=2){
            zero=zero-2;
            one=one-2;
            if(zero!=0 && one!=0){
                if(zero<=one)
                substring=substring+zero;
                else
                substring=substring+one;
            }
            cout<<substring<<"\n";
        }
        else
        cout<<"0\n";
    }
}