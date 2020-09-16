#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a;
    cin>>n>>a;
    ll arr[n+5];
    ll idx;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        for(int i=1;i<=a;i++)
            idx=arr[a-1];
    }
    ll cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)
            cnt++;
    }

    if(idx==1)
        cout<<cnt-1<<endl;
    else
        cout<<cnt<<endl;
    return 0;
}
