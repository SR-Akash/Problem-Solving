#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll an,di,mi;
    ll g,p,b;
    cin>>an>>di>>mi>>g>>p>>b;
    ll x=abs(g-an);
        ll y=abs(p+x);
        ll ok=abs(g+p)-(an+di);
        ll hm=abs(ok+b);
    if(g>=an&&y>=di&&hm>=mi)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
