#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll c, m, x;
        cin>>c>>m>>x;
        ll sum=c+m+x;
        cout << min(c, min(sum/3, m)) << endl;
    }
}

