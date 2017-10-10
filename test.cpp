#include<bits/stdc++.h>
using namespace std;
int n,a[100],s,i,x;
main()
{
	cin>>n;
	//for(i=1;i<=n;i++)
	 //cin>>a[i];
	for(i=1;i<=n;i++)
	  {cin>>x;
	  if(x>=0) s+=x ;else i=n+1;
	  }
	  cout<<s;
}
