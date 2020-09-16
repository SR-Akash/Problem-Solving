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
    if(n<3)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0;i<n-2;i++)
    {
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
