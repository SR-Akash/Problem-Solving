#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll w1,w2,h1,h2;
    cin>>w1>>h1>>w2>>h2;
    ll a=w1+w2;
    ll b=h1+h2;
    ll ans=a+(2*b)+(w1-w2)+4;
    cout<<ans<<endl;
    return 0;
}
