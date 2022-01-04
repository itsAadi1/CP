#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,x,pair=0,paisa;
        cin>>n>>l>>x;
        for(int i=0;i<n-l;i++){
            if(l==0){
              break;
            }
          pair++;
          if(pair==l){
            paisa=x*pair;
            break;
          }
          paisa=x*pair;
        }
        cout<<paisa<<endl;
    }
}