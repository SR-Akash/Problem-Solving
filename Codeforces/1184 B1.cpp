#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll s,b;
   cin>>s>>b;
   ll arr[s+5];
   vector<ll>vc;
   for(int i=0;i<s;i++)
   {
       cin>>arr[i];
       vc.push_back(arr[i]);
   }
   ll d,g;
   vector<pair<ll,ll> > vv;
   for(int i=0;i<b;i++)
   {
       cin>>d>>g;
       vv.push_back(make_pair(d,g));
   }

    sort(vv.begin(),vv.end());
    sort(vc.begin(),vc.end());
    ll sum=0;
    for(int i=0;i<s;i++)
    {
        if(arr[i]>=vv[i].first)
            sum=sum+vv[i].second;
        cout<<sum<<" ";
    }

    return 0;
}
