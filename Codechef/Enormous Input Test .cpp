#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll cnt=0;
    while(n--)
    {
        ll num;
        scanf("%lld",&num);
        if(num%k==0)
            cnt++;
    }
    printf("%lld",cnt);
    return 0;
}
