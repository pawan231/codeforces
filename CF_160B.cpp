//160B
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int s1,s2,n;
	string str;
	int arr[100];
	int brr[100];
	cin>>n;
	s1=s2=0;
	cin>>str;
	for(int i=0;i<n;i++)
	{
		arr[i]=str[i]-48;
		s1+=arr[i];
	}
	for(int i=n;i<(2*n);i++)
	{
		brr[i-n]=str[i]-48;
		s2+=brr[i-n];
	}
    sort(arr,arr+n);
	sort(brr,brr+n);
	int flag=1;
	if(s1>=s2)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]<=brr[i])
			{
				cout<<"NO"<<endl;
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<"YES"<<endl;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=brr[i])
			{
				cout<<"NO"<<endl;
				flag=0;
				break;
			}
		}
		if(flag==1)
		cout<<"YES"<<endl;
	}

}
