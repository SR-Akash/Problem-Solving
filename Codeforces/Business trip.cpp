#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc;
    ll n;
    cin>>n;
    ll arr[12];
    for(int i=0;i<12;i++)
    {
        ll xx;
        cin>>xx;
        vc.push_back(xx);
    }
    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());

    ll cnt=0;
    ll i=0;
    ll sum=0;
    for(int i=0;i<12;i++)
    {
        sum+=vc[i];
    }
    ll ok=0;
    if(sum<n)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        while(ok<12&&cnt<n)
        {
            cnt+=vc[ok];
            ok++;
        }
        cout<<ok<<endl;
    }
    return 0;
}
