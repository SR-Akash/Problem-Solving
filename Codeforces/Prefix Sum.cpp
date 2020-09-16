#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=1;i<=n;i++)
    {
        arr[i]+=arr[i-1];
    }

    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<" ";
    }
    return 0;
}
