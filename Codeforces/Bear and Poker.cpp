#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    ll mx;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>arr[0])
            arr[0]=arr[i];
        mx=arr[0];
    }
    for(int i=1;i<=n;i++)
    {
        while(arr[i]%2==0)
            arr[i]/=2;
        while(arr[i]%3==0)
            arr[i]/=3;
    }

    for(int i=1;i<=n;i++)
    {
        if(arr[i]!=arr[1])
        {
            cout<<"No"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}
