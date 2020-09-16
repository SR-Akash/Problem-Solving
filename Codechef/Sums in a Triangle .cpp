#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll ok=0;
    while(n--)
    {
        ll t;
        cin>>t;
        ll sum=0;
        ok=(t*(t+1))/2;
        for(int i=0;i<ok;i++)
        {
            ll xx;
            cin>>xx;
            sum+=xx;
        }
        cout<<ok-1<<endl;
    }
    return 0;
}
