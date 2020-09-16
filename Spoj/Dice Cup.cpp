#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll mn=min(a,b);
    ll mx=max(a,b);
    if(mx==mn)
    {
        cout<<mn+1<<endl;
        return 0;
    }
    for(int i=mn+1;i<=mx+1;i++)
        cout<<i<<endl;
    return 0;
}
