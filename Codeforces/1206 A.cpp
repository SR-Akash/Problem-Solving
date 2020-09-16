#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    ll arr2[m+5];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    reverse(arr,arr+n);
    reverse(arr2,arr2+m);
    cout<<arr[0]<<" "<<arr2[0]<<endl;

    return 0;
}
