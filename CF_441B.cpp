//cf 441B
#include<iostream>
#include<map>
int arr[4000];
using namespace std;
int main()
{
	map<int,int > m;
	int n,sum,k,a,b,x,y;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		arr[a]+=b;
	}
	x=sum=0;


	for(int i=1;i<3002;i++)
	{
        y=arr[i];
		if(y+x<=k)
		{

			sum+=y+x;
			x=0;
		}
		else
		{
			sum+=k;
			x=y-max(k-x,0);
		}

	}
	cout<<sum;

}
