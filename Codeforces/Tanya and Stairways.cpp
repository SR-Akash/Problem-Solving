#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int>vc,vec;
    ll n;
    cin>>n;
    ll arr[n+5];
    ll store[n+5];
    ll cnt=0;
    ll ok;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1&&i>0)
        {
            vc.push_back(arr[i-1]);
        }
    }
    vc.push_back(arr[n-1]);
    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<" ";
    }
    return 0;
}
