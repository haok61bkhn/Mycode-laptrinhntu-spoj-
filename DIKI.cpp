#include<bits/stdc++.h>
#define Nmax int(1e5+100)
#define Amax int(1e8)
using namespace std;
int X,i,n,m,C[Amax];
//int Find(int x,int y,int k)
//{   if(x>y) return (0);
//	int Mid=(x+y)/2;
//	if(A[Mid]==k){return(1);}
//	if(A[Mid]>k) return(Find(x,Mid-1,k) ) ;else return(Find(Mid+1,y,k)) ;
//}
//=================================
void Init()
{  // freopen("int.txt","r",stdin);
	 cin>>n>>m; 
	 for(i=1;i<=n;i++)
	   { cin>>X;
	   C[X]=1;
	   if( X-m>0) if(C[X-m]){cout<<X-m<<" "<<X ;i=n+2;}
	 }
	if(i==n+1) cout<<-1;
}
int main()
{
	Init();
	
//	for(i=2;i<=n;i++)
//	  if(Find(1,i-1,A[i]-m)==1) {cout<<A[i]-m<<" "<<A[i];return(0);};
//	  cout<<-1;
	  

}

