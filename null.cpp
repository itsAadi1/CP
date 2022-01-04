#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<queue>
#include<stdlib.h>
#include<array>
#include <string>
#include<cmath>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
     cin.tie(NULL); 
     cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int xk,yk,x1,x2,y1,y2;
	    cin>>xk>>yk>>x1>>y1>>x2>>y2;
	    string out="NO";
	if(!(xk==1 || xk==8 || yk==1 || yk==8))
             	out="NO";
                 else {
	   if (xk==1)
	   {
	    if ((x1==2 || x2==2) && (y1!=y2))
	      {
	       if(abs(y1-yk)>1 && abs(y2-yk)>1){
	               out ="YES";
	       }


	      }
	   }
	else if(xk==8)
	{
	    if ((x1==7 || x2==7) && (y1!=y2)){
	       if(abs(y1-yk)>1 && abs(y2-yk)>1){
	             out ="YES";
	       }
	           }

	 }
	 if(yk==1)
	 {
	    if ((y1==2 || y2==2) && (x1!=x2)){
	      if(abs(x1-xk)>1 && abs(x2-xk)>1){
	          out ="YES";
	      }

	    }

	}
	else if(yk==8)
	{
	    if ((y1==7 || y2 ==7) && (x1!=x2))
	    {
	        if(abs(xk-x1)>1 && abs(xk-x2)>1){
	             out ="YES";
	        }

	    }

	}
    } cout<<out<<endl;
  }
	return 0;
} 