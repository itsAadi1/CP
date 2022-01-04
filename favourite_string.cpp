#include<bits/stdc++.h>
using namespace std;
int chef(string s,int i){
    // cout<<s<<endl;
    for(int j=i;j<s.length();j++){
        if(s[j]=='c'){
            string str;
            for(int k=j;k<j+4;k++){
              str=str+s[k];
            }
            // cout<<str<<endl;
            if(str=="chef")
            return 1;
    }
}
return 0;
}
int code(string s){
    int i;
    for(i=0;i<s.length();i++){
        // cout<<s[i]<<" "<<endl;
        if(s[i]=='c'){
            string str;
            for(int j=i;j<i+4;j++){
              str=str+s[j];
            }
            // cout<<str<<endl;
            if(str=="code"){
             if(chef(s,i+4))
             return 1;
             return 0;
            }

            else if(str=="chef")
            return 0;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(code(s))
        cout<<"AC\n";
        else
        cout<<"WA\n";
    }
}
