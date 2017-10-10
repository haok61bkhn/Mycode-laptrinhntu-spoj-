#include<iostream>
#include<algorithm>
#define Nmax int(3e4+100)
using namespace std;
int f,l;
int Sn(int m)
{ int Res=0;
  while(m>0)
    {
    	Res=Res*10+m%10;
    	m=m/10;
    }
  return(Res);
}
//===============================================
int Ucnn(int u,int v)
{
	if (v==0) return(u); else return(Ucnn(v,u%v));
}
//============================================
void Init()
{int Cout=0;
 // freopen("int.txt","r",stdin);
	cin>>f>>l;
	 for(int i=f;i<=l;i++)
	   if(Ucnn(i,Sn(i))==1) Cout++;
 cout<<Cout;
}
//=================================================
main()
{
	Init();
}
