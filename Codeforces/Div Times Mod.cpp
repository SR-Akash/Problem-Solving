#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll ok=1;
    for(int i=1;i<k;i++)
    {
        if(n%i==0)
            ok=i;
    }
    ll x=n/ok;
    cout<<x*k+ok<<endl;
    return 0;
}
