#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc;

    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        vc.push_back(x);
    }

    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());

   // for(int i=0;i<n;i++)
        cout<<vc[0]<<" ";
}
