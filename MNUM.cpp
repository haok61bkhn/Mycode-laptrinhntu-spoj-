#include<algorithm>
#include<iostream>
#define Nmax int(1e5)
using namespace std;
int F[Nmax],Res[Nmax],Max,x,n;
void  QHD()
{
	 F[1]=0;Res[1]=1;
	 F[2]=1;Res[2]=2;
	 F[3]=1;Res[3]=2;
	 F[4]=2;Res[4]=2;
	 F[5]=0;Res[5]=2;Max=2;
	 for(int i=6;i<=Nmax;i++)
	    {if(i %2!=0) F[i]=1; else 
	      F[i]=F[i/2-1]+2;
	      if(F[i]>Max) {Max=F[i];Res[i]=i;} else Res[i]=Res[i-1];
	    }
}
//=========================================	      
main()
{  // freopen("int.txt","r",stdin);
   QHD();
	cin>>n;
	 for(int i1=1;i1<=n;i1++)
	  {
	  	cin>>x;
	  	cout<<Res[x];
	  }
}
//==============================
