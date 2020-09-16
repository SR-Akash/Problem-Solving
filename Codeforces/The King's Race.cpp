#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a,b;
    cin>>a>>b;
    ll x=abs(1-a);
    ll xx=abs(n-b);
    if(x==xx)
        cout<<"White"<<endl;
    else if(x<xx)
        cout<<"White"<<endl;
    else
        cout<<"Black"<<endl;

   return 0;

}
