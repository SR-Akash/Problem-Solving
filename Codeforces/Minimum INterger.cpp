#include<bits/stdc++.h>

#define ll          long long
#define ff          first
#define ss          second
#define pb          push_back
#define mkp         make_pair
#define sz          size()
#define all(a)      a.begin(),a.end()
#define mem(a,b)    memset(a,b,sizeof(a))
#define pi          2*acos(0.0)
#define scan1(a)    scanf("%d",&a)
#define scan2(a,b)  scanf("%d %d",&a,&b)
#define scanl(a)    scanf("%lld",&a)
#define scanll(a,b) scanf("%lld %lld",&a,&b)
#define MAXN        100006
#define eps         10e-7

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c<a)
        {
            cout<<c<<endl;
        }
        else
        {
            ll d=b/c+1;
            cout<<d*c<<endl;
        }
    }
    return 0;
}
