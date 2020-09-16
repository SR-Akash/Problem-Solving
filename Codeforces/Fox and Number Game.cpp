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
        ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            arr[i]-=arr[i+1];
            cnt++;
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<cnt<<endl;

    return 0;
}
