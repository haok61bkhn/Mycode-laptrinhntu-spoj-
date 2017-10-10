#include<bits/stdc++.h>
#define Amax int(1e5)
#define Nmax int(1e6)
using namespace std;
long long Min,N,A[Nmax*4],B[Nmax*4],A1[Nmax],i1;
long long Res1,Res2,Res;
void Find(int k,int i,int j,int x,int y)
{   if(y<x) return;
	if(i>y or j<x ) return;
	
	if(i>=x and j<=y) {Res1+=A[k];Res2+=B[k];return;}
	else{
	int Mid=(i+j)/2;
    Find(k*2,i,Mid,x,y);
    Find(k*2+1,Mid+1,j,x,y);
   // Res1=A[k*2]+A[k*2+1];
   // Res2=B[k*2]+B[k*2+1];
	}
}
	
	
void Update(int k,int i,int j,int y)
{
	if(i>y or j<y) return;
    if(i==j) {A[k]+=y-Amax;B[k]+=1;return;}
    int Mid=(i+j)/2;
    Update(k*2,i,Mid,y);
     Update(k*2+1,Mid+1,j,y);
    A[k]=A[k*2]+A[k*2+1];
    B[k]=B[k*2]+B[k*2+1];
 }
//======================================
void Init()
{  char X;  
  //freopen("int.txt","r",stdin);
	cin>>N;
	Update(1,0,Amax*2,Amax);
	for( i1=1;i1<=N;i1++) 
	  {
	  	  cin>>X;
	  	  if(X=='(') A1[i1]  =A1[i1-1]+1; else A1[i1]=A1[i1-1]-1;
	  	 
	  	  Res1=0;Res2=0;
	  	  Find(1,0,Amax*2,Min+Amax,A1[i1]-1+Amax);
	  	   Update(1,0,Amax*2,A1[i1]+Amax);
	  	  Res+=Res2*A1[i1]-Res1;
	  	   Min=min(A1[i1],Min);
	  }
	cout<<Res;
}
//==========================================
main()
{
	Init();
}
