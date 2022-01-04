#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,k,petrol,diesel;
        cin>>x>>y>>a>>b>>k;
        petrol=x+(a*k);
        diesel=y+(b*k);
        if(petrol<diesel)
        cout<<"PETROL\n";
        if(diesel<petrol)
        cout<<"DIESEL\n";
        if(diesel==petrol)
        cout<<"SAME PRICE\n";
    }
}