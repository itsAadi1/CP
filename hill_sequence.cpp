#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#define GG long int
using namespace std;
int main()
{
    int y;
    cin>>y;
    while(y--)
    {
        GG n,x,flag=0;
        cin>>n;
        map<GG, GG> namo;
        vector<GG>leso, lund;
        for(GG i=0;i <n; i++){
            cin>>x;
            namo[x]++;
        }
        for(auto x: namo){
            if(x.second > 2)
            {
                flag=1;
                break;
            }
            lund.push_back(x.first);
        }
        sort(lund.begin(), lund.end());
        if(flag==1 || namo[lund[lund.size()-1]] == 2){
            cout<<-1<<endl;
        }
        else
        {
            for(GG i=0;i<lund.size(); i++)
            {
                if(namo[lund[i]]==2)
                {
                    cout<<lund[i]<<" ";
                }

            }
            for(GG i = lund.size()-1; i>=0; i--)
            {
                cout<<lund[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}