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
    string st;
    cin>>st;
    int cnt=0;
    int ll=st.length();
    sort(st.begin(),st.end());
    int mxi=0;
    for(int i=0; i<=ll; i++)
    {
        if(st[i]>mxi)
        {
            mxi=st[i];
            cnt=1;
        }
        else if(st[i]==mxi)
            cnt++;

    }

    for(int j=0; j<cnt; j++)
        cout<<char(mxi);
    cout<<endl;
    return 0;
}
