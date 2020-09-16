#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        ll ok=i,accha=i;
        while(ok!=0)
        {
            accha=accha*10+ok%10;
            ok=ok/10;
        }
        sum+=accha;
    }
    cout<<sum%m<<endl;
    return 0;
}
