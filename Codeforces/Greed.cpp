#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    ll a[n+5],b[n+5];
    for(int i=0;i<n;i++)
    {
          cin>>a[i];
          sum+=a[i];
    }

    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        if(b[n-2]+b[n-1]<sum)
        {
            cout<<"No"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;
}
