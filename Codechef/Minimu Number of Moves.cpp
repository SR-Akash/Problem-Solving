#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll t;
        cin>>t;
        ll arr[t+5];
        ll mx;
        ll cnt=0;
        ll sum=0;
        ll ok=10001;
        for(int i=0;i<t;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0;i<t;i++)
        {
            if(arr[i]<ok)
            {
                ok=arr[i];
            }
        }
        ll ans=sum-(ok*t);
        cout<<ans<<endl;
    }
    return 0;
}
