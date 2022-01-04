 #include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include<array>
#include<queue>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
    int num,sum=0,highest_count=-1;
    cin >> num;
    map<int,int> count;
    for (int i = 0; i < num; i++)
    {
        int ptr;
        cin >> ptr;
        count[ptr]++;
    }
    for(auto x: count)
    {
        if(highest_count < x.second) highest_count = x.second;
        sum+=x.second;
    }
    if(highest_count == num) cout << "0" << endl;
    else if(highest_count <= 1 && num >= 2) cout << "-1" << endl;
    else cout << (sum-highest_count+1) << endl;
}
}