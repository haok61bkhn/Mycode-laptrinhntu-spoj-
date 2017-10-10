#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string S,S1,S2,Res1;
int C[int(1e5)],n,Cout;
int hash(int k)
{
	if(S[k]=='A') return(2);
	if(S[k]=='T') return(3);
	if(S[k]=='G') return(4);
	return(5);
}

void xuli(string X)
{ int Res=0;
	for(int k=0;k<n;k++)
	  Res+=Res*3+hash(k);
	if(C[Res]==0) {Res1+=X;C[Res]=1;Cout++;} ;
}
void Init()
{
//	freopen("int.txt","r",stdin);
	cin>>n;
	cin>>S1;
	cin>>S2;
	for(int i=0;i<n;i++) 
	  {
	  	 for(int j=0;j<=i-1;j++) S+=S1[j];
	  	 for(int j=i;j<n;j++)
	  	  S+=S2[j];
	  	    xuli(S);
	  	    S="";
	  }
	  S=S1;
	  S1=S2;
	  S2=S;
	  S="";
	  for(int i=0;i<n;i++) 
	  {
	  	 for(int j=0;j<=i-1;j++) S+=S1[j];
	  	 for(int j=i;j<n;j++)
	  	  S+=S2[j];
	  	    xuli(S);
	  	    S="";
	  }
}
main()
{Init();
cout<<Cout<<"\n";
for(int i=0;i<n*Cout;i++)
   if((i+1)%n==0 and i<n*Cout-1) cout<<Res1[i]<<"\n"; else cout<<Res1[i];
 //  cout<<"\a";
}
