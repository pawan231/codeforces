//688B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	cout<<str;
	long long int x=str.length();
	x--;
	while(x>-1)
	{
		cout<<str[x];
		x--;
	}
}
