#include<bits/stdc++.h>


#define X  first
#define Y  second
typedef long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i++)
#define FOD(i,a,b) for(ll i = a;i>=b;i--)
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<ll,ll>ii;
typedef priority_queue<ll,vector<ll>,greater<ll> > heap_min;

struct data
{
    int value;
    int  time;
    bool operator < (const data &o)const
	{
	    if (time==o.time) return value<o.value;
		return time < o.time;
	}

};

ll F[100005],n,kq,x,y;
data b[100005];

int main()
{  //freopen("int.txt","r",stdin);
    ios_base::sync_with_stdio(0);
    cin>>n;
    FOR (i,1,n)
    {
        cin>>x>>y;
        b[i].value=x;
        b[i].time=y;
    }
    sort(b+1,b+1+n);
    kq=0;
    
   for( int i=1;i<=n;i++)
     for(int j=min(i,b[i].time);j>=0;j--)
     
     {  F[j]=max(F[j-1]+b[i].value,F[j]);kq=max(kq,F[j]);}
     cout<<kq;
       
}
    
