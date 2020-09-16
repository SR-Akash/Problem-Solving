#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<pair<ll,ll> >vc;
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        //vc.push_back(make_pair(arr[i],i));
    }
    //sort(vc.begin(),vc.end());

    vector<ll>vec;
    ll mx=10005;
    ll idx,idx2;
    for(int i=1;i<=n;i++)
    {
       ll j=i+1;
       if(j>n)
        j=1;
       if(abs(arr[i]-arr[j])<mx)
       {
           mx=abs(arr[i]-arr[j]);
           idx=i;
           idx2=j;
       }
    }
     cout<<idx<<" "<<idx2<<endl;

    return 0;
}
