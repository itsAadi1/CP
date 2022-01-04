#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int>vec;
        for(i=0;i<n;i++)
        cin>>vec[i];
        map<int,int>m;
        for(i=0;i<n;i++){
            if(m.find(vec[i])==m.end())
            m[vec[i]]=1;
            else
            m[vec[i]]++;
        }
    }
}