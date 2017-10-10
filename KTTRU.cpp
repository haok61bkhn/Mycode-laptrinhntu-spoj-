#include<iostream>
#include<string>
using namespace std;
string s;
long long test,a,b;
int main()
{ freopen("int.txt","r",stdin);
    cin>>s; cin>>test;
    for (int i=1;i<=test;i++)
    {
        cin>>a>>b; a--; b--;
        if (s[a%s.length()]==s[b%s.length()]) cout<<"Yes"; else cout<<"No"; cout<<endl;
    }
}
    
