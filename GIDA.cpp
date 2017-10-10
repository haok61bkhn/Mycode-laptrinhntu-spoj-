#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int i,n,j,Res;
vector<int> a,b;

//=========================================	
void Init()
{ int x;
 // freopen("int.txt ","r",stdin);
	cin>>n;
	for(i=1;i<=n;i++)
	  {
	  	cin>>x;
	  	a.push_back(x);
	  }
	for(i=1;i<=n;i++)
	  {cin>>x;
	   b.push_back(x);
	  }
	vector<int>::iterator y=a.begin();
	sort(y,y+n);
	y=b.begin();
	sort(y,y+n);
	
}
void Program()
{ int j=0;
	for( i=0;i<n;i++)
	  if(b[i]>a[j]) {Res++;j++;} ;
	  cout<<Res;
}
main()
{ Init();
  Program();
}
	  	
	
