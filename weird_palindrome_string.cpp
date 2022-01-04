#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,odd=0;
        cin>>n;
        // int *ptr=NULL;
        // ptr=new int[n];
        // for(i=0;i<n;i++){
        //    cin>>*(ptr+i);
        // }
        // for(i=0;i<n;i++){
        //     if((*(ptr+i)%2)==0)
        //     odd++;
        // }
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            if(arr[i]%2!=0)
            odd++;
        }
        if(odd==0)
        cout<<"0\n";
       else if(odd==1)
        cout<<"1\n";
        else if(odd>1)
        cout<<odd/2<<"\n"; 
    }
}