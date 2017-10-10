#include<bits/stdc++.h>
#define Nmax int(1e5+9)
#define oo -int(1e9)
using namespace std;
long long n,i,A[Nmax],k,F[Nmax];
long long  IT[Nmax*4],Res,Res1,Res2,Trace[Nmax],P[Nmax],vt,k1;
void update(int k,int x,int y,int l,int r )
{
	if(x>r or y<l) return;
	if(x==y) {IT[k]=F[i];P[k]=i;return;}
	int mid=(x+y)/2;
	update(k*2,x,mid,l,r);
	update(k*2+1,mid+1,y,l,r);;
	if(IT[k*2]>IT[k*2+1]) {IT[k]=IT[k*2];P[k]=P[k*2];} else {IT[k]=IT[k*2+1];P[k]=P[k*2+1];}
}
//========================
void Max(int k,int x,int y,int l,int r)
{
	if(x>r or y<l)  return;
	if(l<=x and y<=r)  {if (Res1<IT[k]) {Res1=IT[k];Res2=P[k];return;}return;}
	int mid=(x+y)/2;
	Max(k*2,x,mid,l,r);Max(k*2+1,mid+1,y,l,r);
//	if(IT[k*2]>IT[k*2+1]) //{Res1=IT[k*2];Res2=P[k*2];} else {Res1=IT[k*2+1];Res2=P[k*2+1];}

}
void Init()
{
	cin>>n>>k1;
	for(i=1;i<=n;i++)
	 {
	 	cin>>A[i];
	 	F[i]=oo;
	 	
	 }
	 vt=0;Res=0;
	 i=1;
	 F[1]=A[1];update(1,1,n,1,1);
	 if(F[1]>Res){ Res=F[1];vt=1;
	 }
  	for(i=2;i<=n;i++)
	  { if(i-k1>0)
	   {Res1=oo;
	  	Max(1,1,n,i-k1,i-1);F[i]=Res1+A[i];Trace[i]=Res2;}
	    else 	{Res1= oo; Max(1,1,n,1,i-1); if(Res1>0){F[i]=Res1+A[i];Trace[i]=Res2;} else 
	  F[i]=A[i];}
	     
	     if(F[i]>Res) vt=i;
	  	Res=max(Res,F[i]);
	  	update(1,1,n,i,i);
	  }
	  cout<<Res<<"\n";
	  
}
//------------------------------
main()
{ //freopen("int.txt","r",stdin);
 int s[Nmax];
	Init();
	i=1;
	s[1]=vt;
	while(vt>0)
	 {
	 	 i++;vt=Trace[vt];
	 	 s[i]=vt;
	 }
	cout<<i<<" ";
	for(i=i;i>=1;i--)
	  cout<<s[i]<<" ";
}
