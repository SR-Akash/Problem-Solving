#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ans;
int main()
{

    ll same=1,dif=0;
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll mn = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+i])
            same++;
        else
        {
            dif=same;
            same=1;
        }


        ans=max(ans,2*(min(dif,same)));
    }

    cout<<ans<<endl;

    return 0;
}
