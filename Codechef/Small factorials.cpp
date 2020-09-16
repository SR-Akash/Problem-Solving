#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll num;
        cin>>num;
        ll fact=1;
        for(int i=1;i<=num;i++)
        {
            fact*=i;
        }
        cout<<fact<<endl;
    }
    return 0;
}
