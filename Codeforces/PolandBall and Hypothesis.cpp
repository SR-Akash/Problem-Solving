#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<3<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<<4<<endl;
        return 0;
    }
    else
    {
        cout<<n-2<<endl;
    }

    return 0;
}
