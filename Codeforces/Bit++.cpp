#include <bits/stdc++.h>
#define pb push_back
#define mkp make_pair
#define maxx 10000005
#define MOD 1000003
#define sf(n) scanf("%lld", &n);
#define sff(n,m) scanf("%lld %lld", &n, &m)
#define pf(n) printf("%lld\n", n)
#define pff(n,m) printf("%lld %lld\n", n, m)
#define mem(a) memset(a, 0, sizeof(a))
#define fr(i,n) for(ll i=0; i<n; i++)
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define pi 2*acos(0.0)
#define F first
#define S second
#define EPS 1e-9
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string st;
        cin>>st;
        ll odd=0;
        ll x=0;
        for(int i=0;i<n;i++)
        {
            if(st[i]%2!=0)
                odd++;
        }
        for(int i=0;i<n;i++)
        {
            if(odd>1)
            {
                if(st[i]%2!=0)
                {
                    cout<<st[i];
                    x++;
                    if(x==2)
                        break;
                }
            }
            else
            {
                cout<<-1;
                break;
            }

        }
        cout<<endl;
    }
}
