#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll cnt=0;
    if(n<=9)
    {
        cout<<n<<endl;
        for(int i=0;i<n;i++)
            cout<<1<<" ";
    }
    else if(n%10==0)
    {
        ll x=n/10;
        cout<<x<<endl;
        for(int i=0;i<x;i++)
            cout<<10<<" ";
    }
    else if(n%11==0)
    {
        ll y=n/11;
        cout<<y<<endl;
        for(int i=0;i<y;i++)
            cout<<11<<" ";
    }
    else
    {
        ll ok=n/11;
        ll hm=n%11;
        ll accha=hm/10;
        ll oo=hm%10;
        //cout<<"OK"<<ok<<endl;
        //cout<<"HM"<<hm<<endl;
        //cout<<"ACCHA"<<accha<<endl;
        //cout<<"OO"<<oo<<endl;

        if(oo==0)
        {
            cout<<ok+accha<<endl;
            for(int i=0;i<accha;i++)
                cout<<10<<" ";
            for(int i=0;i<ok;i++)
                cout<<11<<" ";

        }
        else if(hm>0)
        {
            cout<<ok+hm<<endl;
            for(int i=0;i<hm;i++)
                cout<<1<<" ";
            for(int i=0;i<ok;i++)
                cout<<11<<" ";
        }

    }
    return 0;

}
