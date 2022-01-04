#include<bits/stdc++.h>
using namespace std;
#define don(i,n) for(int i=0; i<n; i++)
void srk(int T) 
{
    int n; cin>>n;
   string str; cin>>str;

   int count=1; 
   char temp=str[0];
   don(i,n)
   {
       if(str[i]!=temp) {temp=str[i]; count++;}
   }
    if(count==1) cout << "SAHID\n";
    else if(count==2) cout << "RAMADHIR\n";
    else
    {
        if(count%3==0) cout << "SAHID\n";
        else if(count%3==1) cout << "SAHID\n";
        else cout << "RAMADHIR\n";
    }
    
}

 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
int G=1;    
cin >> G;
while (G--)
{
srk(G);
}
return 0;
}