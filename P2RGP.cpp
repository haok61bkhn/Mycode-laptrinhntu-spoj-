#include<algorithm>
#include<iostream>
#define Nmax int(1e4+100)
#define oo int(1e5)
#include<math.h>
using namespace std;
unsigned long int n,m,s,Res,D[Nmax],C[Nmax],A[Nmax][Nmax],p;
int Dijkstra(int x,int y)
{ 
  for(int i=1;i<=n;i++) {C[i]=0;D[i]=A[i][x];}
   s=x;
   D[s]=0;
  C[x]=1;
      while(s!=y)
        {
        	for(int i=1;i<=n;i++)
        	   if(C[i]==0 and D[i]>A[s][i]) D[i]=A[s][i]+D[s];
        	 int Min=oo;
        	for(int i=1;i<=n;i++)
        	  if(C[i]==0 and D[i]<Min) { Min=D[i];s=i;};
        	C[s]=1;
		}
	return(D[s]);
}
//=================================================
void Init()
{ int x,y,z;
 freopen("int.txt","r",stdin);
	cin>>n>>m;
	 for(int i=1;i<=n;i++)
	    for(int j=1;j<=n;j++)
	     A[i][j]=oo;	 
	 for(int i=1;i<=m;i++)
	   {
	   	cin>>x>>y>>z;z=pow(2,z);
	   	A[x][y]=z;A[y][x]=z;A[i][i]=oo;
	   }
	  
	 for(int j=1;j<=n-1;j++)
	   for(int k=j+1;k<=n;k++)
	    {
		
	//	 cout<<j<<" "<<k<<" "<<Dijkstra(j,k)<<"\n";
	     Res+=Dijkstra(j,k);
		 }
	     
   p=0;
	while(Res>0)
	  { D[p]=Res%2;
	    Res=Res/2;
	    p++;
	   }
	for(int i=p-1;i>=0;i-- ) cout<<D[i];
	
	    
}
//-===================================================
main()
{
	Init();
}
    
