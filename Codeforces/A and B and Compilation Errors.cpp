#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int>va,vb,vc;
    ll n;
    cin>>n;
    ll x=n-1;
    ll xx=n-2;
    ll sa=0,sb=0,sc=0;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        sa+=a;
    }
    for(int i=0;i<x;i++)
    {
        ll b;
        cin>>b;
        sb+=b;
    }
    for(int i=0;i<xx;i++)
    {
        ll c;
        cin>>c;
        sc+=c;
    }

    ll ans=sa-sb;
    ll res=sa-sc-ans;
    cout<<ans<<endl;
    cout<<res<<endl;
    return 0;
}
