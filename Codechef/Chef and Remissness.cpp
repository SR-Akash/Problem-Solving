#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<endl;
    }
    return 0;
}
