#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       sum+=arr[i];
    }
    ll xx=sum/n;

    ll sm=0;
    for(int j=0;j<n;j++)
    {
        sm+=abs(xx-arr[j])*abs(xx-arr[j]);
    }

    double ans=sqrt(sm/n);
    cout<<fixed<<setprecision(1)<<ans<<endl;

}
