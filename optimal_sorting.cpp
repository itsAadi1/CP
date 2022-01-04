#include<bits/stdc++.h>
using namespace std;
void sorting(vector<int>vec){
    sort(vec.begin(),vec.end());
    // for(auto it:vec){
    //     cout<<it;
    // }
}
int main(){
    vector<int>vec={1,8,4,5};
    sorting(vec);
    for(auto it:vec){
        cout<<it;
    }
}