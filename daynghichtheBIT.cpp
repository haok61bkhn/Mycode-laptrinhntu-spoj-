#include<algorithm>
#include<iostream>
#define Nmax int(1e6+100)

using namespace std;
int a[Nmax],BIT[Nmax],n;
//===============================================
void Update(int m)
{
  while(m<=Nmax)
    { BIT[m]++;
      m+=m&-m;
    }
}
//================================================
int Find(int m)
{ int Res1=0;
	while(m>=1)
	  { Res1+=BIT[m];
	    m=m&m-1;
	  }
	return(Res1);
	  	
}

//=================================================
void Init()
{ int Res=0;
  // freopen("int.txt","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	for(int i=n;i>=1;i--)
	  {
	  	Update(a[i]);
	  	Res+=Find(a[i]-1);
	  }
 cout<<Res;
}
//=================================================
main()
{
	Init();
}

