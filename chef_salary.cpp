#include<bits/stdc++.h>
using namespace std;
int bc=0,bc1=0;
int check(int n){
   if(n==1)
   return 1;
   else
   return 0;
}

int bonus(int n){
   if(n==1)
   bc++;
   bc1=bc;
   if(n==0){
       bc=0;
   }
   return bc1;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,i,d,wd=0,ld=0,bd;
        cin>>x>>y;
        for(i=1;i<=30;i++){
            cin>>d;
            if(check(d))
            wd++;
            else
                ld++;
                bd=bonus(d);
    }

    int ts;
    ts=wd*x+bd*y;
    cout<<ts<<endl;
bc=0;
bc1=0;
    }
}