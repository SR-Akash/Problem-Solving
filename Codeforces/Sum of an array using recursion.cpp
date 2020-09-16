#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll max(ll n,ll arr[])
{
   sort(arr,arr+n);
   ll sum=0;
   return accumulate(arr,arr+n,sum);


}
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<max(n,arr);

    return 0;
}


