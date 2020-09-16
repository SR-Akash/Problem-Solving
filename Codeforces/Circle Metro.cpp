#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc,vc1;
    ll n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    for(int i=a;i<n;i++)
       vc.push_back(i);
    for(int i=b;i<=y;i--)
        vc1.push_back(i);

    for(int i=0;i<vc1.size();i++)
    {
        //cout<<vc[i]<<" "<<endl;
        cout<<vc1[i]<<" "<<endl;

    }
    return 0;
}
