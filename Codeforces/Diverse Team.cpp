#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    set<ll>st;
    vector<ll>vc;
    set<ll>::iterator it;
    ll n,k;
    cin>>n>>k;
    ll arr[n+5];
    ll check[1005];
    memset(check,0,sizeof(check));
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(!check[x])
        {
            check[x]=1;
            //cout<<x<<" "; //Distinct Value
            vc.push_back(i); // here i is index of distinct Value
        }
    }
    //cout<<vc.size()<<endl;
    if(vc.size()<k)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
            cout<<vc[i]<<" ";
    }


    return 0;
}
