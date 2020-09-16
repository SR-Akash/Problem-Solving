
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>vc;
    vector<ll>vcc;

    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        double root=sqrt(x);
        ll ans=root;
        if(ans==root)
            vcc.push_back(x);
        else
            vc.push_back(x);
    }

    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());

    cout<<vc[0]<<endl;
    return 0;
}


