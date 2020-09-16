#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    ll arr[25];
    cin>>n;
    arr[0]=1;
    for(int i=1;i<25;i++)
        arr[i]=arr[i-1]*2;

    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
