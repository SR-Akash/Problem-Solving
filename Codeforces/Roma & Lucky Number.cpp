#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;

    cin>>n>>k;
    ll arr[n+5];
    ll ok=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        ll xx;
        cin>>arr[i];
        cnt=0;
        while(arr[i]>=1)
        {
           if(arr[i]%10==4||arr[i]%10==7)
            cnt++;
           arr[i]=arr[i]/10;
        }

        if(cnt<=k)
            ok++;

    }
    cout<<ok<<endl;
    return 0;
}
