#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    map<ll, ll>::iterator it;
    ll arr[n+5];
    double sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    double mean=sum/n;
    cout<<fixed<<setprecision(1)<<mean<<endl;
    if(n%2==1)
    {
        cout<<fixed<<setprecision(1)<<arr[n/2]<<endl;
    }
    else if(n%2==0)
    {
        ll x=n/2;
        double xx=arr[x]+arr[x-1];
        double median=xx/2;
        cout<<fixed<<setprecision(1)<<median<<endl;
    }

    ll mx=0;
    for(ll i=0; i<n; i++)
    {

        mp[arr[i]]++;
        mx=max(mx, mp[arr[i]]);
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second==mx)
        {
            cout << it->first << endl;
            break;
        }
    }
    return 0;

}
