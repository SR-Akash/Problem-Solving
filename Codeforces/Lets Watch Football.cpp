#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,mul=0,ans=0;
    cin>>a>>b>>c;
    mul=a*c;
    if(mul%b==0)
        ans=mul/b;
    else
    {
        ans=(mul/b)+1;
    }
    cout<<ans-c<<endl;
    return 0;
}
