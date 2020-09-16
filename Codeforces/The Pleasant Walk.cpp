#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n+5];
    ll cnt=0;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cnt++;
            if(mx<cnt)
                mx=cnt;
        }
        else
            cnt=0;
    }
    cout<<mx+1<<endl;
    return 0;
}
