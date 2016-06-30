//672A
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,x,n;
	cin>>n;
    if(n<10)
		cout<<n;
	else if(n<190)
	{
		x=9;
		i=9;
		while(x<n)
		{
			x=x+2;
			i++;
		}
		if(n==x)
			cout<<i%10;
		else
			cout<<i/10;
	}
	else 
	{
		x=189;
		i=99;
		while(x<n)
		{
			x=x+3;
			i++;
		}
		//cout<<i;
		if(x==n)
			cout<<i%10;
		else if(x-1==n)
		{
			i=i/10;
			cout<<i%10;
		}
		else
		{
			cout<<i/100;
		}
	}

}
