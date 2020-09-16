#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo(ll n)
{
    if(n<=1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    ll n;
    cin>>n;
    cout<<fibo(n);

    return 0;
}


