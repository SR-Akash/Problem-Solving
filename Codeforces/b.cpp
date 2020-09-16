#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<ll> v;
    ll q; cin>>q;
    while(q--)
    {
        ll n, k; cin>>n>>k; ll arr[n]; ll fck = 0;
        for(ll i=0; i<n; i++) {cin>>arr[i]; if(arr[i]%2) { v.push_back(fck); fck++;}}

        ll sum_vector=0;
        for(auto x:v) sum_vector += x;

        if(sum_vector == k)
        {
            cout<<"YES"<<endl;
            for(ll i =0; i<n; i++)
            {
                if(arr[i] % 2) cout<<i+1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        v.clear();
    }

    return 0;
}
