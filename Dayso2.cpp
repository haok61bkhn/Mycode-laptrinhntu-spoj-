#include<iostream>
#include<algorithm>
#define Nmax int(1e5)
#define Amax int(1e9)
using namespace std;
long long i,Min[Nmax],n,x;
long long  Res,S[Nmax];
long long max(long long int a,long long int b)
{if (a>b) return(a);else return(b);
}
//============================
long long min(long long int a,long long int b)
{if (a<b) return(a);else return(b);
}
void Init()
{  //freopen("int.txt","r",stdin);
	cin>>n;
	for(i=1;i<=2;i++)
	 {
	 	cin>>x;
	 	S[i]=S[i-1]+x;
	 	Min[i]=S[i];
	 }
	for(i=3;i<=n;i++)
	 {
	 	cin>>x;
	 	S[i]=S[i-1]+x;
	 	Min[i]=min(Min[i-3],S[i]);
	 }
}
void Program()
{  Res=-Amax;
	for(int j=n;j>=3;j--)
	 Res=max(Res,S[j]-Min[j-3]);

	cout<<Res;
}
//========================================
main()
{
	Init();
	Program();
}
	   	  
	
