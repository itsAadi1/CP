#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        // vector<int>vec;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // long x;
            // cin>>x;
            // vec.emplace_back(x);
        }
        int ai,aj,ak;
        sort(arr,arr+n);
    //    sort(vec.begin(),vec.end());
    //    ai=*(vec.end()-1);
    //    aj=*(vec.begin());
    //    ak=*(vec.end()-2);
    //    cout<<(long)(ai-aj)*ak<<"\n";
    int ans=(arr[n-1]-arr[0])*arr[n-2];
    cout<<ans<<"\n";
    }
}