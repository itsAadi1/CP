#include<bits/stdc++.h>
using namespace std;
int bc=0,bc1=0;

int bonus(char n){
   if(n=='1'){
   bc++;
   bc1=bc;}
   if(n=='0')
       bc=0;
   return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,i,wd=0,ld=0,bd;
        char d[31];
        cin>>x>>y;
         cin>>d;
        for(i=1;i<=30;i++){
            if(d[i]=='1')
            wd++;
                bonus(d[i]);
    }

    int ts;
    ts=wd*x+bc1*y;
    cout<<ts<<endl;
bc=0;
bc1=0;
    }
}