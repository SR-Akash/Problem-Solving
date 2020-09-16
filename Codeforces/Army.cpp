#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    ll m=n-1;
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    ll a,b;
    cin>>a>>b;
    //ll div=b-a;
    ll sum=0;
    for(int i=a;i<b;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
