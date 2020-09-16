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
    ll n;
    cin>>n;
    string st;
    cin>>st;
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        if(st[i]=='7'||st[i]=='4')
            cnt++;
    }

    if(cnt==n)
    {
        ll x=n/2;
        vector<char>vc;
        vector<char>vc1;
        for(int i=0; i<x; i++)
        {
            vc.pb(st[i]);
        }

        reverse(st.begin(),st.end());
        for(int i=0; i<x; i++)
        {
            vc1.pb(st[i]);
        }

        ll sum=0,sum1=0;
        for(int i=0; i<vc.size(); i++)
        {
            sum+=vc[i];
        }

        for(int i=0; i<vc1.size(); i++)
        {
            sum1+=vc1[i];
        }

        if(sum==sum1)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
        cout<<"NO"<<endl;
}
