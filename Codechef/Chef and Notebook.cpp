#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,k,n;
        cin>>x>>y>>k>>n;
        ll p,c;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            cin>>p>>c;
            if(k>=c&&p>=x-y)
                flag=true;

        }

        printf(flag ? "LuckyChef\n" : "UnluckyChef\n");


    }
    return 0;
}
