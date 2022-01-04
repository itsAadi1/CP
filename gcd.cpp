
#include "bits/stdc++.h"
using namespace std;
#define lol(i,n) for(int i=0; i<n; i++)
#define chutiya push_back
#define lund cout << "\n";
#define kiit vector<int>
void srk(int GG) 
{
int n; cin>>n;
kiit b,a; int x; bool L=true;
lol(i,n)
{
    cin>>x; b.chutiya(x);
    if(i>0 && b[i-1]%b[i]!=0)
    {
        L=false;
    }
}
if(L)
{
    lol(i,n) cout << b[i] << ' ';
    lund;
}
else cout << "-1\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
int GG=1;    
cin >> GG;
while (GG--)
{
srk(GG);
}
return 0;
}
