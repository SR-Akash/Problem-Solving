#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ull x;
        cin>>x;
        x%=1000000007;
        ull ans=(x*x)%1000000007;
        cout<<ans<<endl;
    }

    return 0;
}
