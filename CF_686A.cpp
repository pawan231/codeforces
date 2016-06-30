#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	long long int n,y,z;
	char x;
	long long int ans=0;
	cin>>n>>z;
	while(n--)
	{
		cin>>x>>y;
		if(x=='+')
			z=z+y;
		else
		{
			if(y<=z)
				z=z-y;
			else
				ans++;
		}

	}

	cout<<z<<" "<<ans;

}
