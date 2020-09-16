#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    ll st;
    cin>>n>>st;

    ll ans=n-st*2;
    if(ans<0)
        ans=0;

    cout<<ans<<endl;
    return 0;
}

