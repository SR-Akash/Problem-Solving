#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    //ll arr[n+5],brr[m+5];
    vector<ll>arr(5000),brr(5000);
    ll mn=min(n,m);
    ll cnt=0;
    ll odd=0,even=0;

    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        arr[x%2==1]++;
    }

    ll odd1=0,even1=0;
    for(int i=1;i<=m;i++)
    {
        ll y;
        cin>>y;
        brr[y%2==1]++;
    }

//    cout<<odd1<<" "<<even1<<endl;
//    cout<<odd<<" "<<even<<endl;
    cout<<min(arr[0],brr[1])+min(arr[1],brr[0])<<endl;

    return 0;
}
