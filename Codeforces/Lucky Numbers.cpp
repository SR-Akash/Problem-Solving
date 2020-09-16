#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll ok=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        ll xx;
        cin>>xx;
        cnt=0;
        while(xx>=1)
        {
           if(xx%10==4||xx%10==7)
            cnt++;
           xx=xx/10;
        }

        if(cnt<=k)
            ok++;

    }
    cout<<ok<<endl;
    return 0;
}
