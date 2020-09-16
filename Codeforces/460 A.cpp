#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll cnt=0;
    ll xx=n/m;
    ll yy=n+xx;
    ll zz=yy/m;
    cout<<n+zz<<endl;
}
