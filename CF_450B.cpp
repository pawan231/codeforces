//450B
#include<iostream>
#define ll long long int
#define mod 1000000007
using namespace std;
int main(){
	ll x,y,n,z,f;
	ll arr[7];
	cin>>x>>y>>n;
	arr[1]=(x+mod)%mod;
	arr[2]=(y+mod)%mod;
	arr[3]=(y-x+mod)%mod;
	arr[4]=(-x+mod)%mod;
	arr[5]=(-y+mod)%mod;
	arr[6]=(x-y+mod)%mod;
	if(n<=6) cout<<(arr[n]+mod)%mod;
	else{
		z=n%6;
		if(z==0) cout<<(arr[6]+mod)%mod;
		else cout<<(arr[z]+mod)%mod;

	}}

/*#include<iostream>

using namespace std;
#define mod 1000000007
//int mod=1e9+7
int main()
{
	long long x,y,z,n;
	cin>>x>>y>>n;
	if(n==1)
	{
		if(x>0) cout<<x%mod;
		else
			cout<<x%mod+mod;
	}

	else
	{
		for(int i=2;i<n;i++)
		{
			long long temp=y;
			y=y-x;
			x=temp;
			
		}
		cout<<y;
		/*if(y>0)
		cout<<y%mod;
	    else
			cout<<y%mod+mod;
	}
	
	return 0;
}*/
