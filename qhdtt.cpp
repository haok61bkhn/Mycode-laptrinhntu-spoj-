#include<bits/stdc++.h>
#define Nmax 30
using namespace std;
int k,k1,i,j,Max,T[Nmax*Nmax],b[Nmax],a[Nmax][Nmax],n,y,last;
int Getbit(int x,int y)
{
	return((x>>y) & 1);
}
//========================
int Turnoff(int x,int y)
{
	return(x & ~(1<<y));
}
//========================
int getmax(int x)
{ k=0;
	for(j=1;j<=n;j++)
	   if(Getbit(x,j-1)==1) 
	    {
	    	k++;
	    	b[k]=j-1;
		}
	Max=0;
	for(k1=1;k1<=k;k1++)
	  {
	    y=T[Turnoff(x,b[k1])]+a[b[k1]+1][k];
	    Max=max(y,Max);
	  }
	 return(Max);	  	
	
}
//===============================
void Init()
{freopen("int.txt","r",stdin);
	cin>>n;
	for(i=1;i<=n;i++)
	  for(j=1;j<=n;j++)
	  cin>>a[i][j];
	  T[0]=0;last=(1<<(n))-1;
	  for(i=1;i<=last;i++)
	    {
	    	T[i]=getmax(i);
		}
	cout<<T[last];
	  
}
//================================
main()
{
	Init();
}
