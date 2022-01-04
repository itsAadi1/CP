#include<bits/stdc++.h>
using namespace std;

char compare(char a,char b){
   if(a=='R' && b=='P')
   return b;
   if(a=='R' && b=='S')
   return a;
   if(a=='S' && b=='P')
   return a;
   if(a=='S' && b=='R')
   return b;
   if(a=='P' && b=='S')
   return b;
   if(a=='P' && b=='R')
   return a;
   if(a==b)
   return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        string s,str;
        for(i=0;i<n;i++){
            cin>>s[i];
            s=s+s[i];
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
              char g= compare(s[i],s[j]);
              s[i]=g;
            }
            str=str+s[i];
        }
        cout<<str<<"\n";
    }
}