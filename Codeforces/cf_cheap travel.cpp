#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,y,x,p,l,ll,xx;

    cin>>n>>m>>a>>b;
    y=(ceil((float)n/(float)m)*b);
    //cout<<y<<endl;
    x=n*a;
    p=(n%m)*a;
    l=(n/m)*b;
    ll=p+l;
    //cout<<ll<<endl;
     //cout<<min(ll,min(y,x))<<endl;
     xx=min(ll,min(x,y));

    cout<<xx<<endl;

    return 0;
}
