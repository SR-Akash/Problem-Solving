#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        ll b,p,f,h,c,hb,cb;
        cin>>b>>p>>f>>h>>c;

        if(h>c)
        {
            ll ok=(b/p);
            ll x=ok*h;
            ll okk=(b-ok)/f;
            ll y=okk*c;
            b=b/2;

        }

       else

       {
           ll a=(b/f);
           ll b=a*c;
           ll aa=(b-a)/p;
           ll c=aa*h;
           cout<<b+c<<endl;
       }
    }

    return 0;
}
