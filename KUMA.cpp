#include<iostream>
#include<algorithm>

using namespace std;
int m,n;
long Ucln(int x,int y)
{
	if(y==0) return(x) ;else return(Ucln(y,x%y));
}
//=====================================
void Init()
{  //freopen("int.txt","r",stdin);
	cin>>m>>n;
	cout<<Ucln(m,n);
}
//===============================
main()
{
	Init();
}
