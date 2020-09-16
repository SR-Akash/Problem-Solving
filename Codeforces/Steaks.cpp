#include<bits/stdc++.h>
#define ll long long
#define pi acos(0);

using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;

    if(k>n)
        cout<<10<<endl;
    else
    {
        if(n%k==0)
            cout<<n*5<<endl;
        else
            cout<<(n/k)*5+5<<endl;
    }

    return 0;
}
