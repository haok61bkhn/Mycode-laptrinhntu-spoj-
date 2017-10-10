#include<bits/stdc++.h>
#define ll long long
#define Mod 987654321
using namespace std;
ll T,i,m,n,k;
//==============================
ll Tohop(ll b,ll a)
{  int Res=1,Res1=1;
     for(ll j=b;j>=b-a+1;j--)
        Res=(Res*j)%Mod;
     for(ll j=2;j<=a;j++)
       Res1=Res1*j%Mod;
    if(Res>Res1) return(Res/Res1) ;else return((Mod-Res)/Res1);
     
}
//====================================
void Init() 
{ //freopen("int.txt","r",stdin);
	cin>>T;
	for(i=1;i<=T;i++)
	 {cin>>m>>n>>k;
	   if(m<n*k) cout<<0<<"\n";else cout<<Tohop(m-n*k+n-1,n-1)<<" ";
	  }
} 
//======================================
main()
{
	 Init();
}
