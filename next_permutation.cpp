#include<bits/stdc++.h>
using namespace std;
int main(){
    bool res=true;
    string s="bca";
    sort(s.begin(),s.end());
    while(res!=false){
      res=next_permutation(s.begin(),s.end());
      cout<<s<<endl;
    }
}