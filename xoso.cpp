#include<iostream>
#include<algorithm>
#define Nmax (1e6+100)
#include<vector>
using namespace std;
vector<int> a;
vector< vector<int> > f(Nmax, vector<int>(2,0)); 
long long i,n,x,Sum,Res;
void Init()
{ //freopen("int.txt","r",stdin);
	cin>>n;
	for(i=1;i<=n;i++)
	  { cin>>x;
	    a.push_back(x);
	    Sum+=x;
	  }
  for(i=n-1;i>=0;i--)
     if(a[i]%2==0) {f[i][0]=f[i+1][0]+1;f[i][1]=f[i+1][1];} else 
	   {f[i][0]=f[i+1][0];f[i][1]=f[i+1][1]+1;}
 for(i=0;i<n;i++)
   if(Sum%2==0) {if(a[i]%2==0) Res+=f[i+1][0]; else Res+=f[i+1][1];}
     else{if(a[i]%2==0) Res+=f[i+1][1] ; else Res+=f[i+1][0];}
  cout<<Res;
}
main()
{Init();}
