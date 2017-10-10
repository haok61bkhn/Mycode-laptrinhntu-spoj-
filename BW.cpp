#include <bits/stdc++.h>
#define Nmax int(1e9)
using namespace std;
vector<int> a,b;
long i,n,j,x,Res;

main()
	{ //freopen("int.txt","r",stdin);
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	    cin>>x;
	    a.push_back(x);
	  }
	  for(i=1;i<=n;i++)
	  {
	    cin>>x;
	    b.push_back(x);
	  }
	  a.push_back(Nmax);
	  b.push_back(Nmax);
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  i=0;j=0;
   while(i<n and j<n)
   {
   	if(a[i]<b[j]) { if(a[i+1]>b[j]) {Res++;i++;j++;} else i++;}else
   	  {if(b[j+1]>a[i]) {Res++;i++;j++;}else j++;}
   	}
    cout<<Res;
}
  
  
  
	    
