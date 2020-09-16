#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>vc;
    double x=sqrt(n);
    ll xx=x*x;
    if(xx==n)
    {
        cout<<x+x+x+x<<endl;
    }
    else
    {
        cout<<2*n+2<<endl;
    }

}
