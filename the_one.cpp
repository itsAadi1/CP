#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   int n,x,k,i,c=0;
   cin>>n>>x>>k;
   int A[n],B[n];
   for(i=0;i<n;i++){
       cin>>A[i];
   }
   for(i=0;i<n;i++){
       cin>>B[i];
      }
   for(i=0;i<n;i++){
    int diff=A[i]-B[i];
    if(diff<0)
    diff=-diff;
     if(diff<=k)
     c++;
   }
   cout<<c<<endl;
   if(c>=x)
   cout<<"YES\n";
   else 
   cout<<"NO\n";
    }
}