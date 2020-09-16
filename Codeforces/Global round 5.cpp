#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    ll mx=arr[n-1];
    ll a=mx/2;
    //cout<<a<<endl;
    ll b=mx-a;
    //cout<<b<<endl;
    ll mxx=max(a,b);
    cout<<mxx<<endl;
    for(int i=0;i<n-2;i++)
    {
       cout<<0<<endl;
    }
    cout<<-mxx<<endl;
    return 0;
}

