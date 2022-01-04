#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       signed int x,y,step=0;
        cin>>x>>y;
         for(signed int i=x;i<=(y+1);i++){
             if(i<y){
             i=i+1;
             step++;
             }
             else if(i==y)
                break;
                if(i>y)
                  goto bahar;
         }
         bahar:
         step++;
         cout<<step<<endl;
    }
}