#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c%3==0)
            cout<<a<<endl;
        else if(c%3==1)
            cout<<b<<endl;
       else
       {
           ll x=a^b;
           cout<<x<<endl;
       }

    }
}


