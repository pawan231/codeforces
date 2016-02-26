//476B
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
double factorial(double n)
{
    double counter;
    double fact = 1;

     //for Loop Block
     for (double counter = 1; counter <= n; counter++)
     {
         fact = fact * counter;
     }

  return fact;
}
int main()
{
	string in,out;
	double n;
	cin>>in;
	cin>>out;
	n=in.length();
	double plus1=0,plus2=0,minus1=0,minus2=0,que=0;
	for(double i=0;i<n;i++)
	{
		if(in[i]=='+')
		{
			plus1++;
		}
		else
		{
			minus1++;
		}
	}
	for(double i=0;i<n;i++)
	{
		if(out[i]=='+')
		{
			plus2++;
		}
		else if(out[i]=='-')
		{
			minus2++;
		}
		else
		{
			que++;
		}
	}
	double ans1=plus1-minus1;
	double ans2=plus2-minus2;
	double x=ans1-ans2;

	/*if(x==0)
	{
		plus1=minus1=que/2;
	}
	else{
	if(ans1>0)
	{
		plus1=x;
		minus1=que-x;
	}
	else
	{
		minus1=x;
		plus1=que-x;
	}
	}*/
	double flag=0;
	for(double i=0;i<=que;i++)
    {
        plus1=i;
        minus1=que-i;
        if((plus1-minus1)==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
	{
		cout<<"0.000000000000";
		exit(0);
	}
	//cout<<plus1<<" "<<minus1<<endl;
	double y=factorial(minus1)*factorial(plus1);
     // cout<<y<<endl;
	double z=factorial(que);
	//cout<<z<<endl;

	z=z/y;
	//double j=1;
	y=1;
	for(double j=1;j<=que;j++)
	{
		y=y*2;
	}
	z=z/y;
	printf("%.9f",z);


}



/*
Tutorial
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std ;

int main(void)
{
    char s1[15], s2[15] ;

    scanf("%s%s", s1, s2) ;

    int n = strlen(s1) ;
    
    int answerPosition = 0 ;
    for(int i=0;i<n;i++)
        answerPosition += (s1[i]=='+'?1:-1) ;

    int finalPosition = 0 ;
    int moves = 0 ; //number of '?'
    for(int i=0;i<n;i++)
    {
        if(s2[i]=='?')
            moves++ ;
        else
            finalPosition += (s2[i]=='+'?1:-1) ;
    }

    int distance = answerPosition-finalPosition ;
    double answer ;
    if((distance+moves)%2!=0 || moves<abs(distance)) //can't reach the destination no matter how
        answer = 0 ;
    else
    {
        int m = (moves+abs(distance))/2 ; //moves needed toward the distance m is abs(distance)+(moves-abs(distance))/2
        //answer is C(moves,m)/(1<<moves)
        int c = 1 ;
        for(int i=0;i<m;i++)
            c *= moves-i ;
        for(int i=2;i<=m;i++)
            c /= i ;
        answer = (double)c/(1<<moves) ;
    }

    printf("%.12f\n", answer) ;

    return 0 ;
}
*/
