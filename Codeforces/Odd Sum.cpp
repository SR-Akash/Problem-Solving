#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    ll x=1;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll sum=0;

        for(int i=a;i<=b;i++)
        {
            if(i%2==1)
             sum+=i;

        }

        cout<<"Case "<<x<<": "<<sum<<endl;
        x++;
    }
}
