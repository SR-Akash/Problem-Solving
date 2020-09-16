#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<pair<ll,ll> >vc;
    ll n,k;
    cin>>n>>k;
    ll arr[n+5];
    ll arr2[n+5];
    ll f,t;
    ll mx[n+5];
    ll max=-9999999999999;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        vc.push_back(make_pair(f,t));
    }
   // sort(vc.begin(),vc.end());
    //reverse(vc.begin(),vc.end());

    for(int i=0;i<n;i++)
    {
        if(vc[i].second>k)
        {
            ans=vc[i].first-(vc[i].second-k);
            if(max<ans)
            max=ans;
        }
        else
        {
            ans=vc[i].first;
            if(max<ans)
            max=ans;
        }
    }
    cout<<max<<endl;
    return 0;
}
