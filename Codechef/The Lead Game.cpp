#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll suma=0,sumb=0;
    ll lead=0;
    ll ok;
    ll a,b;
    while(n--)
    {
        cin>>a>>b;
        suma+=a;
        sumb+=b;
        ll div=abs(suma-sumb);
        if(div>lead)
        {
            lead=abs(suma-sumb);
            if(suma-sumb>0)
                ok=1;
                else
                    ok=2;
        }
    }
    cout<<ok<<" "<<lead;
    return 0;
}
