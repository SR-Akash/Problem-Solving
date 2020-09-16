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
        ll a,b;
        cin>>a>>b;
        ll gcd=__gcd(a,b);
        ll x=gcd/a;
        ll y=gcd/b;

        //cout<<gcd<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
        //cout<<x*y<<endl;
    }
}
