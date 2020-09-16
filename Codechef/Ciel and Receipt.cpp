#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    ll  arr[12]={2048,1024,512,256,128,64,32,16,8,4,2,1};
    while(t--)
    {
        ll xx;
        cin>>xx;
        ll ans=0;
        for(int i=0;i<12;i++)
        {
            ans+=xx/arr[i];
            xx%=arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
