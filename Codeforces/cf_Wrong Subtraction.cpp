#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;

    for(ll i=0;i<k;i++)
    {
        ll xx=n%10;
        if(xx==0)
            n=n/10;
        else
            n--;
    }
    cout<<n<<endl;
    return 0;
}
