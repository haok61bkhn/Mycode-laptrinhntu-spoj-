#include<bits/stdc++.h>

using namespace std;
long long Res,T,S;
int X,Y,n,m,i,C[102],Res1[102];
vector<int> A,B;
void Init()
{ int n1;
	cin>>n>>m;
	n1=n;
	for(i=1;i<=n1;i++)
	{cin>>X;cin>>Y;
	 if(X<m) 
	 { A.push_back(X);B.push_back(Y);}else n-=1;
	}
	Res=0;
}
//===========================
void Try(int i)
{ 
   for(int j=1;j>=0;j--)
     if(S+j*A[i]<=m and i<n)
       {
       	  S+=j*A[i];
       	  T+=j*B[i];
       	  C[i]=j;
       	  if(Res<T ) {Res=T;for(int k=0;k<n;k++) Res1[k]=C[k];}
       	 if(i<n-1) Try(i+1);
       	    T-=j*B[i];
            S-=j*A[i];
       	}
  
}
//=========================
main()
{  // freopen("int.txt","r",stdin);
	Init();
	if(n>0)	Try(0);
	cout<<Res<<"\n";
	for(int k=n-1;k>=0;k--)
	 if(Res1[k]==1) cout<<k+1<<" ";
}
