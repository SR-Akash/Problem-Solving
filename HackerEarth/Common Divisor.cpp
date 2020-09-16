#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll xx;
    ll sum=0;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    ll mn=arr[0];
    reverse(arr,arr+n);
    ll mx=arr[0];
    ll a=n*mn;
    ll ans=abs(sum-a);

    ll b=n*mx;
    ll  res=abs(sum-b);

    ll hm=min(ans,res);
    cout<<hm<<endl;

    return 0;
}
