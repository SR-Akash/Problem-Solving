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
        if(arr[i]==arr[i-1])
        {
            cnt++;
        }
    }
    ll ok=cnt+1;
    //sort(arr,arr+n);
    ll hm=arr[n-1];
    ll ans=(ok*hm)/hm;
    cout<<ok<<endl;
    return 0;
}
