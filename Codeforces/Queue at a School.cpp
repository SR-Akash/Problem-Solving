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
    int n,t;
    string st;
    cin>>n>>t;
    cin>>st;
    int ll=st.length();
    for(int i=0; i<t; i++)
    {
        for(int i=0; i<n; i++)
        {
            if(st[i]=='B'&&st[i+1]=='G')
            {
                swap(st[i+1],st[i]);
                i++;
            }
        }

    }
    cout<<st<<endl;
    return 0;

}
