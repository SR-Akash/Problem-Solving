#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll mx=arr[n-1];
    //reverse(arr,arr+n);
    ll a[n+5];
    for(int i=1;i<=mx;i++)
    {
        a[i]=i;
    }
    sort(a,a+mx);
    reverse(a,a+mx);

    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
