#include<bits/stdc++.h>
using namespace std;
 class A{
     int i;
     public:
     void fun(int j){
         i=j;
         cout<<this;
        //  cout<<*this;
     }
 };
 int main(){
     A obj;
     obj.fun(5);
 }