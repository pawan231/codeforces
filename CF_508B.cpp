//508B
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n,num,y;
	int flag1=0,flag2=0;
	string str;
	cin>>str;
	 n=str.size();
	for(int i=0;i<n-1;i++){
		if((str[i]-48)%2==0){
			flag1=1;
			if(str[i]<str[n-1]){
				swap(str[i],str[n-1]);
				cout<<str;
				flag2=1;
				break;
			}
			else{
				y=i;
			}
		}
	}
	if(flag2==0 && flag1==1){
		swap(str[n-1],str[y]);
		cout<<str;
	}
	else if(flag1==0 && flag2==0) 
		cout<<"-1";
	return 0;
}
