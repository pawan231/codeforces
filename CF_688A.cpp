#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,d,flag;
	string str;
	int ans=-1;
	int x=0;
	cin>>n>>d;
	for(i=0;i<d;i++)
	{
		cin>>str;
		flag=0;
		for( j=0;j<n;j++)
		{

			if(str[j]=='0')
			{
				j=n+1;
				x++;
				flag=1;

			}
		}
		ans=max(ans,x);
		if(flag==0)
			x=0;
	}
	cout<<ans;

}
