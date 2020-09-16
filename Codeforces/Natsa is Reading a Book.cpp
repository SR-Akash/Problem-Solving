#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll> >vc;
    for(ll i=0;i<n;i++)
    {
       ll a,b;
        cin>>a>>b;
        vc.push_back(make_pair(a,b));
    }
    ll k;
    cin>>k;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        if(vc[i].second>=k)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;

}
