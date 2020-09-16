#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n+5];
    ll flag=0;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]>=m)
        {
            flag=1;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(flag=1)
    {
        if(sum>=60)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



}
