#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}
