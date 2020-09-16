#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    double p,q,res;
    cin>>n;
    while(n--)
    {

        cin>>p>>q;
        res=(p+q);
        cout<<fabs(res)<<endl;

    }

    return 0;
}
