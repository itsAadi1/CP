#include <bits/stdc++.h>
using namespace std; 
#define gg long long 
#define kl unsigned long long

int main() 
{ 
    int G; cin>>G; 
while(G--)
{ 
    int n,k; 
    cin>>n>>k; 
    priority_queue<int,vector<int>,greater<int>> queue; 
    while(n>0){ 
        queue.push(n%10); n/=10; } 
        while(k--){ 
            gg temp=queue.top(); 
            if(temp==9){ break; } 
            queue.pop();
            queue.push(temp+1);
            } 
            gg lol=1; 
            while(!queue.empty()){
                lol*=queue.top(); 
                queue.pop();

    }
    cout<<lol<<endl;
}
return 0;
}