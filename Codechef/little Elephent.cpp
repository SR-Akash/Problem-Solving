#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        ll sum =0;
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            sum+=num;
        }
        if(sum<=c)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
