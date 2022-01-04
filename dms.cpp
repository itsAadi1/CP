#include<bits/stdc++.h>
using namespace std;
int main(){
    int c=0;
    for(int i=1;i<100;i++){
        if(i%2==0 && i%3==0 && i%5==0)
        c++;
    }
    cout<<c;
}