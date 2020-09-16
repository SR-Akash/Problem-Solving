#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll cnt=0;
    ll same=0;
    ll mn=arr[0];
    ll mx=arr[n-1];
    for(int i=0;i<n;i++)
    {
         if(arr[i]==mn)
            cnt++;
         else if(arr[i]==mx)
            same++;
    }

    cout<<abs(n-(cnt+same))<<endl;

    return 0;
}
