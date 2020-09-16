#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mark[1000000];
bool dec(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.first>b.first;
}
int main()
{
    vector<pair<ll,ll> >vc;
    ll n,m,res=0;
    pair<ll,ll>mp;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        ll toy,box;
        cin>>toy>>box;
        vc.push_back(make_pair(toy,box));
        //cout<<mp.first<<mp.second<<endl
    }

    sort(vc.begin(),vc.end());
    reverse(vc.begin(),vc.end());

    //for(auto v:vc)
        //cout<<v.first<<endl;
    for(int i=0;i<n;i++)
    {
        pair<ll,ll>p=vc[i];
        if(!mark[p.second])
        {
            res+=p.first;
            mark[p.second]=1;
        }
    }
    cout<<res<<endl;
    return 0;
}
