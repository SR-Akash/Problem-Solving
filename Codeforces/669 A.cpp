#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2)
        cout<<1<<endl;
    else
    {
        ll y=n/3;

        cout<<(y*2)+(n%3!=0)<<endl;
    }


    return 0;
}
