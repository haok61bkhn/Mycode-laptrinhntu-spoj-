#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
#define Nmax int(1e6+100)
int N,a[5*Nmax];

using namespace std;
void Update(int k,int x,int y,int l,int r)
{  
    if(x>r || y<l) return;
    if(x>=l and y<=r) { a[k]++;return;}
    int mid=(x+y)/2;
    Update(k*2,x,mid,l,r);Update(k*2+1,mid+1,y,l,r);
    a[k]=a[k*2]+a[k*2+1];
    
}
int Find(int k,int x, int y, int l, int r)
{ if(x>r || y<l) return(0);
  if( x>=l and y<=r){ return(a[k]);}
  int mid=(x+y)/2;
   return(Find(k*2,x,mid,l,r)+Find(k*2+1,mid+1,y,l,r));
} 

void Init()
{ int Res=0;int x;
  freopen("int.txt","r",stdin);
	cin>>N;
  for(int i=1;i<=N;i++)
    { cin>>x;
      Res+=Find(1,1,Nmax,x+1,Nmax);
      Update(1,1,Nmax,x,x);
    }
  cout<<Res;
}
main()
{ Init();
} 
