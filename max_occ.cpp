#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10>arr={0,0,0,0,0,4,4,4,4,4};
    int max=0,el;
   for(int i=0;i<10;i++){
       int c=0;
       for(int j=0;j<10;j++){
         if(i==j)
         continue;
         if(arr[i]==arr[j])
         c++;
       }
       if(c>max){
       max=c;
       el=arr[i];
       }
   }
   cout<<el<<endl;
}