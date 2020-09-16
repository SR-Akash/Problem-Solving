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
        ll sum=0;
        while(num)
        {
            sum+=num%10;
            num/=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
