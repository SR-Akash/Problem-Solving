#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        for(ll i=0; i<n; i++)
        {
            ll x; cin>>x;
            mp[x]++;
        }
        bool ans=false;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(mp[2048]) {ans = true;break;}
            if(it->second>=2)
            {
                ll x=it->second;
                while(x>=2)
                {
                    mp[it->first*2]++;
                    x-=2;
                }
            }
        }
        if(mp[2048]) ans = true;
        if(ans==true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
