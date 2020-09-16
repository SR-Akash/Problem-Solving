#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc;
    ll n,m;
    cin>>n>>m;
    ll arr[n+5];
    ll arr2[m+5];
    for(int i=1;i<=n;i++)
    {
        vc.push_back(i);
    }
    for(int i=1;i<=m;i++)
    {
        vc.push_back(i);
    }
    ll ans;
    ll cnt=0;
    for(int i=1;i<=n;i++)
    {
        ans=i%5;
        cnt=cnt+((m+ans)/5);
    }
    cout<<cnt<<endl;
    return 0;

}
