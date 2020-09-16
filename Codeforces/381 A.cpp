#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    ll sum=0,sm=0;

    for(int i=0;i<n;i++)
    {
        if(arr[0]>arr[n-1])
            sum+=arr[0];
        else if(arr[n-1]>arr[0])
            sm+=arr[n-1];
    }
    cout<<sum<<" "<<sm<<endl;

    return 0;

}
