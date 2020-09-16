#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    double a[n+5];
    double b[n+5];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    double sum=0;
    for(int i=0; i<n; i++)
    {

        sum+=a[i]*b[i];
    }

    double sm=0;
    for(int j=0; j<n; j++)
        sm+=b[j];

    double ans=sum/double(sm);

    cout<<fixed<<setprecision(1)<<ans<<endl;

    return 0;
}

