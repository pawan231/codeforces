//474D
#include<iostream>
#define mod 1000000007
using namespace std;
int main()
{
	int arr[100005];
	int i,j,a,b,t,k;
	cin>>t>>k;
	arr[0]=0;
	for(i=1;i<k;i++)
		arr[i]=1;
	arr[k]=2;
	for(i=k+1;i<=100000;i++)
	{
		arr[i]=(arr[i-1]+arr[i-k])%mod;
	}
	for(i=1;i<=100000;i++)
		arr[i]=(arr[i]+arr[i-1])%mod;
	while(t--)
	{
		cin>>a>>b;
		cout<<(arr[b]-arr[a-1] + mod)%mod<<endl;
	}
}
