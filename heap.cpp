#include<iostream>
#include<algorithm>
#define Nmax int(1e5+8)
#define Amax int(1e8)
using namespace std;
int heap[Nmax];
int c[Amax];
int n,nheap;
int fa(int u)
{
	return(u/2);
}
//===================================================================
void upheap(int m)
{ int u=m*2;
  if((heap[u]<heap[u+1]))u+=1;
  if(heap[m]<heap[u] and u<=nheap)
   {
   	swap(heap[m],heap[u]);
   	upheap(u);
   }
}
//====================================================================
void output()
{
	if (nheap==0){cout<<-1<<'\n';return;}
	cout<<heap[1]<<" "<<c[heap[1]]<<'\n';
	nheap-=1;
	c[heap[1]]=0;
	swap(heap[1],heap[nheap+1]);
	upheap(1);
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
{ 
  heap[nheap]=m;
  downheap(nheap);
}
//==========================================================================
void init()
{ char X;int y;
  	freopen("int.txt","r",stdin);
cin>>n;
 for(int i=1;i<=n;i++)
  {
  cin>>X;
     if(X=='A') {cin>>y;if(c[y]>=1){c[y]++;} else{nheap++;c[y]=1;insert(y);}} else output();
  }
  if(nheap==0) cout<<"-1";else
   {  
   	while(nheap>=1)
   	 { // for(int j=1;j<=c[heap[1]];j++)
   	 	cout<<heap[1]<<" ";
   	 	nheap-=1;
   	 	swap(heap[1],heap[nheap+1]);
   	 	upheap(1);
		}
   }
}
//==========================================================================
main()
{
	init();
 }
