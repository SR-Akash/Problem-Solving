#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll t;
        cin>>t;
        ll sum=0;
        for(int i=0;i<t;i++)
        {
            ll x;
            cin>>x;
            sum=sum|x;
        }
        cout<<sum<<endl;
    }
    return 0;
}
