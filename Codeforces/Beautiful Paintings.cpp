#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
         if(arr[i]==arr[i+1])
        {
            cout<<0<<endl;
            return 0;
        }
        if(arr[i+1]>arr[i])
            cnt++;
    }
    if(cnt==n)
        cout<<cnt-1<<endl;
    else
        cout<<cnt<<endl;

    return 0;
}
