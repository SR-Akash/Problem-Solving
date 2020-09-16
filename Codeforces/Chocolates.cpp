#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc,nw;
    ll n;
    cin>>n;
    ll arr[n+5];
    ll ok[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //for(int i=0;i<n;i++)
       // ok[i]=arr[i];
    //reverse(ok,ok+n);

    ll dekhi=0;
    ll sum=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=arr[i+1])
        {
            arr[i]=arr[i+1]-1;
            if(arr[i]<0)
                arr[i]=0;
        }
        sum+=arr[i];

    }
    cout<<sum<<endl;

    return 0;
}
