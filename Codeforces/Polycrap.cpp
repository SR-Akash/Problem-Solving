#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n+5];
    ll mx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            f++;
        else
            f=0;
        if(f>mx)
            mx=f;
    }
    ll b=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
           b++;
        else
            break;
    }
    reverse(arr,arr+n);
    ll b2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            b2++;
        else
            break;
    }
    ll ans = max(mx,b+b2);
    cout<<ans<<endl;
    return 0;
}
