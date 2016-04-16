//313B
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string str;
	int q,a,b;
	int arr[100005];
	cin>>str;
	int len=str.size();
	memset(arr,0,100005);
	for(int i=1;i<len;i++)
	{
		if(str[i]==str[i-1])
		{
			arr[i]=arr[i-1]+1;
		}
		else
			arr[i]=arr[i-1];
	}
	cin>>q;
	while(q--)
	{
		cin>>a>>b;
		cout<<(arr[b-1]-arr[a-1])<<endl;
	}
	
}
