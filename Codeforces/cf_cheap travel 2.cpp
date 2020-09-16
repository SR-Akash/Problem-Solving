
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x,y,z,p,q,ll;
    cin>>n>>m>>a>>b;
    x=ceil(n/m)*b;
    y=n*a;
    z=(n%m)*a+(n/m)*b;
    ll=min(x,y);
    p=min(ll,z);
    cout<<p<<endl;
    return 0;
}
