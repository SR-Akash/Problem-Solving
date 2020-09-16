#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b+c==180)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    return 0;
}
