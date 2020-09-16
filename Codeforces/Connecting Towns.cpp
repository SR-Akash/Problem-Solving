#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+5];
        ll x;
        ll sum=1;
        for(int i=0; i<n-1; i++)
        {
            cin>>arr[i];
            sum=(sum*arr[i])%1234567;
        }
        cout<<sum<<endl;
    }
}
