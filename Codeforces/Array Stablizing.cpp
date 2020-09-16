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
    ll mn;
    for(int i=0;i<n;i++)
    {
        ll a=arr[n-2]-arr[0];
        ll b=arr[n-1]-arr[1];
        mn=min(a,b);
    }
    cout<<mn<<endl;
    return 0;
}
