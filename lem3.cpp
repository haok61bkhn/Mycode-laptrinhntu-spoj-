#include<bits/stdc++.h>
#define Nmax 25	
using namespace std;
long long   x,n,i,last,Res,j,k1,k;
long long  T[Nmax][1000000],a[Nmax][Nmax];
//===============================
int Find(int x,int k)
{
	return(((x>>k)) & 1);
}
//==============================
int Turnoff(int x,int k)
{
	return(x&(~(1<<k)));
}
//===============================
void Getmin(int s)
{
vector<int> b(n+1,0);k=0;
  for(j=0;j<n;j++)
   if(Find(s,j)==1) 
     {
     	k++;
     	b[k]=j;
     } 
 for(k1=1;k1<=k;k1++)
 { x=Turnoff(s,b[k1]);
    T[b[k1]][s]=10000000;
     for(j=1;j<=k;j++)
       if(j!=k1)
	    T[b[k1]][s]=min(T[b[j]][x]+a[b[j]][b[k1]],T[b[k1]][s]) ;
	    if(T[b[k1]][s]==10000000) T[b[k1]][s]=0;
	   // cout<<b[k1]<<" "<<s<<" "<<T[b[k1]][s]<<"\n";
	    
	}  
    

}
//=====================================

void Init()
{// freopen("int.txt","r",stdin);
  cin>>n;
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
     cin>>a[i-1][j-1];
	last=(1<<n)-1;
	for(i=1;i<=last;i++)
	  	 Getmin(i);
	Res=T[0][last];
 for(i=1;i<n;i++)
  Res=min(Res,T[i][last]);
	 
}
main()
{Init();
cout<<Res;
}
