#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll b,g,n;
    cin>>b>>g>>n;
    ll x=min(g,n);
    ll y=min(b,n);
    ll z=n-y;
    ll xx=x-z;
    cout<<xx+1<<endl;

    return 0;
}
