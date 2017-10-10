#include<iostream>
#include<algorithm>
#define Nmax int(1e5+8)
using namespace std;
int heap[Nmax],c[Nmax];
int n;
int fa(int u)
{
	return(u/2);
}
//===================================================================
void output()
{
	if (nheap==0){cout<<-1;exit();}
	cout<<heap[1]<<" "<<c[heap[1]]<<'\n';
	nheap--;
	c[heap[1]]=0;
	upheap(1);
}
//===================================================================
void upheap(int m)
{ int u=m*2;
  if(u<nheap and heap[u]<heap[u+1])u+=1;
  if(heap[m]<heap[u])
   {
   	swap(heap[m],heap[u]);
   	upheap(u);
   }
}
//=====================================================================
void downheap(int m)
{
	if(fa(m)>=1 and heap[m]>heap[fa(m)])
	  {
	  	swap(heap[m],heap[fa(m)]);
	    downheap(fa(m));
	  }
}
//========================================================================
void insert(int m)
{ nheap++;
  heap[nheap]=m;
  downheap(nheap);
}
//==========================================================================
void init()
{ freopen("int.txt","r",stdin);
cout>>n;
 for(int i=1;i<=n;i++)
  {
  cin>>X;
  if(X=='A') {cin>>y;if(c[y]>=1){c[y]++;} else{c[y]=1;insert(y);}} else output();
  }
  if(nheap==0) cout<<"-1";else
   {
   	for(inti=1;i<=nheap;i++)
   	 {
   	 	cout<<heap[1];
   	 	upheap(1);
		}
   }
}
//==========================================================================
main()
{
	init();
}
