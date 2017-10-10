#include<algorithm>
#include<iostream>
#define Nmax 100
using namespace std;
int i,n,a[Nmax],heap[Nmax],nh;

int fa(int m)
{
	return(m/2);
}
void Upheap(int m)
{
	int u=m*2;
	if(heap[u]<heap[u+1] and u<nh)u++;
	if(heap[u]>heap[m] and u<=nh)
	{
		swap(heap[u],heap[m]);
		Upheap(u);
	}
}
//========================================
void Downheap(int m)
{
	if(fa(m)>0 and heap[m]>heap[fa(m)])
	{
		swap(heap[m],heap[fa(m)]);
		Downheap(fa(m));
	}
}
//=========================================
void Update(int m)
{
	nh++;
	heap[nh]=m;
	Downheap(nh);
}
//==========================================
void Init()
{ //freopen("int.txt","r",stdin);
	cin>>n;
	for(i=1;i<=n;i++)
	 {
	 	cin>>a[i];
	 	Update(a[i]);
	 }
}
//=============================================
void Output()
{   while(nh>0)
   {
	for(int j=1;j<=nh;j++)
	  cout<<heap[j]<<" ";
	  cout<<'\n';
	  swap(heap[1],heap[nh]);
	  nh--;
	  Upheap(1);
	}
}
//=============================================
main()
{ Init();
  Output();
}
