#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        string pre;
        int i;
        int flag=0;
        for(i=0;i<3;i++){
            cin>>s[i];
        }
        for(i=0;i<2;i++){
            cin>>pre[i];
        }
        for(i=0;i<3;i++){
            for(int j=0;j<2;j++){
                if(s[i]==pre[j]){
                    cout<<s[i];
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }

    }
}
//      for(i=0;i<3;i++){
//             cout<<s[i];
//         }
//     }
// }