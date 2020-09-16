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
    set<ll>s;
    ll cnt=0;
    for(int i=0;i<st.length();i++)
    {
        s.insert(st[i]);
        if(st[i]==st[i+1])
            cnt++;
    }
    ll x=cnt+1;

    if(s.size()<5)
        cout<<0<<" "<<x<<endl;
    else if(x==st.length())
        cout<<0<<" "<<x<<endl;
    else
        cout<<1<<" "<<x<<endl;

   return 0;
}

