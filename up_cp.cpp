#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i;
    fstream obj;
    obj.open("aadi.txt",ios::out | ios::in);
    while(obj.eof()==0){
     getline(obj,s);
    //  cout<<s<<"\n";
     for(i=0;i<s.size();i++){
         if(s[i]>=65 && s[i]<=90)
         s[i]=tolower(s[i]);
        else if(s[i]>=97 && s[i]<=122)
         s[i]=toupper(s[i]);
         obj<<s[i];
     }
    //  getline(obj,s);
     cout<<s<<"\n";
    }
    obj.close();
}