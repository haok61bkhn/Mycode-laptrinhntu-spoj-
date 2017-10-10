#include<algorithm>
#include<iostream>
#define Nmax int(1e5)

using namespace std;
int q,q1,a[Nmax],n,Max,x;
main()
{ 
	cin>>n;
	for(int i=1;i<=n;i++)
	 cin>>a[i];
	cin>>q1;
	for(int i=1;i<=q1;i++)
	  {
	  	 cin>>x;Max=0;
	  	 for(int j=1;j<=n;j++)
	  	  if((x xor a[j])>Max)
	  	 { Max=x xor a[j];
	  	   q=a[j];
	  	 }
	  	 	
	  	 cout<<q<<" ";
	   }
}
