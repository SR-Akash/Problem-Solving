#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(ll n)
{
    if(n>=1)
        return n*fact(n-1);
    else
        return 1;
}
int main()
{
    ll n;
    cin>>n;
    cout<<fact(n);
}
