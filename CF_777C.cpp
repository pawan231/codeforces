#include<bits/stdc++.h>
using namespace std;


#define  ll long long
#define fr(a,n) for(int i=a;i<n;i++)

#define in(x) cin>>x;
#define ot(x) cout<<x<<endl;
#define pb(x) push_back(x);
#define mp make_pair;


#define swap(a,b) {a=a^b;b=a^b;a=a^b;}
#define sort(v) sort(v.begin(),v.end())

#define mx INT_MAX;
#define mod 1e+7;

vector<int > v1;
vector<int > v2;
map<int,int> arr;
int main()
{
     int n;in(n);
     int m;in(m);
     v1.resize(m);
     v2.resize(m);
     fr(0,m)in(v1[i]);
     fr(0,m)v2[i]=1;
     fr(2,n+1)
     {
         for(int j=0;j<m;j++)
         {
             int x;
             in(x);
             if(v1[j]>x)
             {
                 for(int k=v2[j];k<i;k++)
                 {
                     int val=arr[k];
                     int jj=max(val,(i-k));
                     arr[k]=jj;
                 }
                 v2[j]=i;
             }
             v1[j]=x;
         }
     }
     fr(0,m){
     for(int k=v2[i];k<n;k++)
        {
            int val=arr[k];
            int jj=max(val,(n-k+1));
            arr[k]=jj;
        }}
        arr[n]=1;

    // fr(1,n+1)cout<<arr[i]<<" ";
    int q;
    cin>>q;
    fr(0,q)
    {
        int l,r;
        cin>>l>>r;
        r=r-l+1;
        if(arr[l]>=r)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }


}
