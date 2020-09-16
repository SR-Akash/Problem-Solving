#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,x;
    cin>>a>>b>>x;
    cout<<(a+b)/x<<" ";
    ll aa=a%x;
    ll bb=b%x;
    ll mx=0;
    if(aa+bb>=x)
    {
        mx=x-max(aa,bb);
    }
    cout<<mx<<endl;

    return 0;
}
