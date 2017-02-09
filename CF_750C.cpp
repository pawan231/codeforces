#include<bits/stdc++.h>
using namespace std;

#define fr(a,n) for(int i=a;i<n;i++)

#define in(x) cin>>x;
#define ot(x) cout<<x<<endl;
#define pb(x) push_back(x);


#define  ll long long;

#define swap(a,b) {a=a^b;b=a^b;a=a^b;}
#define sort(v) sort(v.begin(),v.end())

#define mx INT_MAX;

vector<int> v;
vector<pair<int,int> > m;
int main()
{
    int n,x;
    in(n);
    int a,b;
    in(a);
    in(b);
    m.pb(make_pair(a,b));
    n--;
    if(b==1){x=mx;}
    else x=1899;
    int y=a;
    fr(0,n)
    {
        in(a);
        in(b);
       // m.insert(pair<int,int>(a,b));
       m.pb(make_pair(a,b));

        if(b==2)
        {

            x=min(x,1899-y);
        }
        y+=a;
    }
    int flag=1;
    if(x!=INT_MAX)
    {
        vector<pair<int,int> >::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            a=it->first;

            b=it->second;
            if((b==1 && x<1900) || (b==2 && x>=1900)){
                flag=0;;
                break;
            }
            x+=a;

        }
        if(flag)cout<<x;
        else cout<<"Impossible";
    }
    else
        cout<<"Infinity";

}
