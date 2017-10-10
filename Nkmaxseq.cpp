#include<algorithm>
#include<iostream>
#define Nmax int(5e4+100)

using namespace std;
int n,p,Sum[Nmax],D[Nmax],i,j,pos;

void Program()
{ 
  int Max=-1;pos=n;
   for( i=n;i>=0;i--)
      if(D[i]==1)
        {
        	for( j=pos;j>=i+1;j--)
        	  if(Sum[j]-Sum[i]>=p)
        	    {
        	    	if(j-i>Max) Max=j-i;
        	    	break;
				}
			pos=j;
			  
		}
	cout<<Max;
}
//=============================================
	
//===	======================================
void Init()
{ int x;
	freopen("int.txt","r",stdin);
		cin>>n>>p;
	for(i=1;i<=n;i++)
		{
			cin>>x;
			Sum[i]=Sum[i-1]+x;
		}
	D[0]=1;int Min=0;
	for(i=1;i<=n;i++)
	  if (Sum[i]<Min) 
	  	{
	  	   D[i]=1;
	  	   Min=Sum[i];
	    }
}
//=============================================
main()
{
	Init();
	Program();
}
