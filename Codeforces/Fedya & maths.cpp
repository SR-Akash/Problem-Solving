#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll BigModRecursive(ll a, ll r,ll Mod)
{
    if(r==0)
        return 1;

    ll aka;
    aka=BigModRecursive(a,r/2,Mod);
    aka=aka*aka;
    aka=aka%Mod;

    if(r%2==1)
    {
        aka=aka*a;
        aka=aka%Mod;
    }
    return aka;
}


int main()
{
    ll n;
    ll xx=(pow(1,n)+pow(2,n)+pow(3,n)+pow(4,n));
    while(cin>>n)
    {
       cout<<BigModRecursive(xx,n)<<endl;
    }
    return 0;
}

