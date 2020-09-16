#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[100005];
    for(int i=1;i<=m;i++)
        cin>>arr[i];
    ll sum=0;
    for(int i=1;i<=m;i++)
    {
        if(arr[i]>=arr[i-1])
            sum+=arr[i]-arr[i-1];
        else
            sum+=arr[i]-arr[i-1]+n;
    }
    cout<<sum-1<<endl;
    return 0;
}
