#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,d;
    vector<ll>vc;
    cin>>a>>b>>c>>d;
    vc.push_back(a);
    vc.push_back(b);
    vc.push_back(c);
    vc.push_back(d);
    ll mx=max(a,max(b,max(c,d)));
    sort(vc.begin(),vc.end());
    cout<<mx-vc[0]<<" "<<mx-vc[1]<<" "<<mx-vc[2]<<endl;

    return 0;
}
