#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>vc;
    while(n--)
    {
        ll x;
        cin>>x;
        ll cnt=0;
        for(int i=1; i<=sqrt(x); i++)
        {
            if(x%i==0)
            {
                if(i%2==0)
                    cnt++;
                if((x/i)%2==0 && (x/i)!=i)
                    cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
