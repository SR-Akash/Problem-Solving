#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,t;
    cin>>n>>k>>t;

    if(t<n)
        cout<<min(k,t);
    else
    {
        ll x=t%n;
        cout<<k-x<<endl;
    }

    return 0;
}
