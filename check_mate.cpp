#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int xk,yk,x1,y1,x2,y2;
        cin>>xk>>yk>>x1>>y1>>x2>>y2;
        if(xk==1 || xk==8||yk==1 || yk==8 ){
            if(x1==x2)
            cout<<"NO\n";
            else{
           if((x1-xk)>1 && (x2-xk)>1){
            if(yk==1){
                if((y1-yk)==1 || (y2-yk)==1){
                    cout<<"YES\n";
                }
                else
                cout<<"NO\n";
            }
            else if(yk==8){
                if((yk-y1==1) || (yk-y2)==1){
                    cout<<"YES\n";
                }
                else
                cout<<"NO\n";
            }
           }
           else
           cout<<"NO\n";
            }
        }
        else
        cout<<"NO\n";
    }
}
