//414B
#include<iostream>
using namespace std;
const int mod = 1000000007;

int dp[2025][2025];

int main()
{
	int n,k;
	long long int ans=0;
    cin>>n>>k;
	for(int i=1;i<=n;i++)
		dp[1][i]=1;
	for(int i=2;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int l=j;l<=n;l+=j)
			{
				(dp[i][l]=(dp[i][l]+dp[i-1][j])%mod)%mod;
			}
		}
	}
	for(int i=1;i<=n;i++)
		(ans=ans+dp[k][i])%mod;
	cout<<ans%mod;
}



/*
Lets define dp[i][j] as number of good sequences of length i that ends in j.
Let's denote divisors of j by x1, x2, ..., xl. Then 
dp[i][j]=dp[i-1][x1]+dp[i-1][x2]+..................

for (i = 1; i <= n; i++)  //loop from 1 to n
   for (int j = i; j <= n; j += i)  //iterating through all multiples of i that are at most n*/
