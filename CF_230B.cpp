//230B
//Sieve algorithm
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
set <long long> myset;
void prime_nu()
{
	bool prime[1000001];
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=1000001;i++)
	{
		if(prime[i]==true)
		{
			for(int j=i*2;j<1000001;j=j+i)
				prime[j]=false;
			
		}
	}
	/*for(int i=2;i<=1000001;i++)
	{
		if(prime[i]==true)
		{
			myset.insert((long long )(i*i));
		}
	}*/
	long long a;
	int n;
	cin>>n;
	prime[1]=prime[0]=false;
	while(n--)
	{
		cin>>a;
		long long b=sqrt(a);
		if(prime[b]==true && b*b==a)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

int main()
{
	int i,n;
	long long a;
	//cin>>n;
	prime_nu();
	/*while(n--)
	{
		cin>>a;
		if(myset.find(a)!=myset.end())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}*/
	
}
