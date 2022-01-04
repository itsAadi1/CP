#include <bits/stdc++.h>
using namespace std;
#define MAX 33000
bool p[MAX];
// find prime number upto 33000, we don't need above 33000 because limit of case is 10^7, and 10^7 root is around 32000
void sieve(){
	memset(p,0,sizeof(p));
	p[0]=1;
	p[1]=1;
	for(int i=2;i<=MAX;i++){
		if(!p[i]){
			for(int j=i*i;j<=MAX;j+=i)
				p[j]=1;
		}
	}
}

//find the number of exponent of a prime number if factor is of form a^x * b^y * c^z..., where a,b,c is prime
// It calculates (x+1)*(y+1)*(z+1), The formula I stated in codechef to find number of factor of a number
int process(int n){
	int ex=1;
	long long ans=1;
	if(!(n%2)){
		while(!(n%2)){
			n/=2;
			ex++;
		}
	}
	ans=ans*(ex);
	for(int i=3;i*i<=n;i+=2){
		if(!p[i] && !(n%i)){
			ex=1;
			while(!(n%i)){
				n/=i;
				ex++;
			}
			ans*=(ex);
		}
	}
	if(n>1) ans*=2;
	return ans;
}
// This function checks if number is of power 2, if a number is of power 2 it is of form 10,100,1000,100000 in binary
// that it it will have at most 1 bit as 1 rest will be 0, K&1 checks if a bit is 1 or 0
// if bit is 1 it increments cnt;
// if cnt ==1 , number is of form 10,100,1000,10000 etc etc
// k>>=1 is equivalent to k/2, right shifting the number 10000>>1 will become 1000  
bool powerof2(int k){
	int cnt=0;
	while(k>0){
		if(k&1)	cnt++;
		k>>=1;
	}
	return cnt==1?1:0;
}
int main() {
	// your code goes here
	sieve();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=process(n-1);
		
		if(powerof2(ans))
			cout<<ans<<endl;
		else{
			bool fl=0;
			ans=1;
			for(int i=2;i*i<=n;i++){
				if(n%i==0){
					// if i divides n then n/i is also a factor
					// therefore we count factors of n/i and i, if n/i has factors of power 2 we output it
					// but in case of i we cannot output as such because if the number is 40, its factors will be (2,20)
					// (4,10), (5,8), etc etc
					// so we cannot output i as such so we save values of i, until the loop exits, when loop exits we have max of i stored as ans
					// which has number of factors of power 2
					int a1=process(n/i);
					int a2=process(i);
					if(powerof2(a1)){
						cout<<a1<<endl;
						cout<<n/i<<endl;
						fl=1;
						break;
					}
					else if(powerof2(a2))
						ans=max(ans,a2);
				}
			}
			if(!fl)
				cout<<ans<<endl;
		}
	}
	return 0;
}