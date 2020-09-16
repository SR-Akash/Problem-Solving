#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int>vc;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll xx;
        cin>>xx;
        vc.push_back(xx);
    }
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=vc[i]*4*i;
    }
    cout<<sum<<endl;
    return 0;
}
