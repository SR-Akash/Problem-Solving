#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(ll n,ll m)
{
    if(n>=1||m>=1)
        return __gcd(n,m);
        else if(m<1||m<1)
            return abs(__gcd(n,m));
    else
        return 1;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    cout<<fact(n,m);

    return 0;
}

