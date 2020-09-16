#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
     ll n,a,b,c,d;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        n++;
        ll add=a+b+c+d;
        if(add*2>=n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
