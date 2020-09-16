#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll div=n/m;
    ll ext=n%m;

    ll min=(div*(div-1)/2)*m;
    min=min+ext*div;
    ll res=(n-m+1);
    ll max=(res*(res-1))/2;

    cout<<min<<" "<<max<<endl;
    return 0;


}
