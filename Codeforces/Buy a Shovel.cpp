#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    for(int i=1;i<100;i++)
    {
        if((i*n)%10==0)
        {
            cout<<i<<endl;
            return 0;
        }
        else if((i*n)%10==k)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
