#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    int p=0;
    for(int j=1;j<=n;j++){
                if(n%j==0)
                p++;
            }
            return p;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,s=0,p=0;
        cin>>x>>y;
        for(int i=x;i<=y;i++){
            if(prime(i+2)>0 && prime(i+2)<=2){
            i++;
            s++;}
            else{
            s++;
            }  
        }
        cout<<s<<endl;
    }
}