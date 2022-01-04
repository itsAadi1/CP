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
   if(n==0){
       if(bc>bc1)
       bc1=bc;
       bc=0;
   }
   return bc1;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,i,wd=0,ld=0,bd;
        long long int ar;
        cin>>x>>y;
        cin>>ar;
        while(ar--){
        int z=ar%10;
        int z1=ar/10;
            if(check(z))
            wd++;
            else
                ld++;
                bd=bonus(z);
    }

    int ts;
    ts=wd*x+bd*y;
    cout<<ts<<endl;
bc=0;
bc1=0;
    }
}