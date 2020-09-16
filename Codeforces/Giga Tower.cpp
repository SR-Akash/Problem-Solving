#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll checkeight(ll num)
{
    num=abs(num);
    while(num)
    {
        if(num%10==8)
            return 1;
        num/=10;
    }
    return 0;
}
int main()
{
    ll n;
    cin>>n;
    ll cnt=0;
    ll num=n+1;
    while(1)
    {
       if(checkeight(num))
       {
           ll ans=num-n;
           cout<<ans<<endl;
           return 0;
       }
       else
        num++;
    }
    return 0;
}
