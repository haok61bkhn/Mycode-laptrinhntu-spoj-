#include<bits/stdc++.h>
using namespace std;
main()
{ int a[100][100];
	 freopen("int.txt","w",stdout);
  srand(time(NULL));
	 int n=16;cout<<n<<"\n";
	 for(int i=0;i<n;i++)
	   {
	   for(int j=0;j<n;j++)
	   {
	     if(i==j) a[i][j]=0 ;else a[i][j]=rand();//cin>>a[i][j];
	     cout<<a[i][j]<<" ";
	    }
	    cout<<"\n";
	    }
}
