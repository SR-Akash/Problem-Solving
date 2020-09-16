#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    //ll ans=0;
    ll odd=0;
    ll even=0;
    cin>>n;
    ll arr[n+5];
    for(ll i=0;i<n;i++)
    {
        ll l,r;
        ll ans;
        ll odd=0;
        ll even=0;
        cin>>l>>r;
        for(ll i=l;i<=r;i++)
        {
            if(i%2!=0)
            {
                odd+=i;
            }
            else if(i%2==0)
            {
                even+=i;
            }
        }
        ans=even+(-odd);
         cout<<ans<<endl;

    }
    return 0;
}
