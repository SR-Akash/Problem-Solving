#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x,y,z;
    cin>>x>>y>>z;

    if(x+z<y)
        cout<<"-"<<endl;
    else if(y+z<x)
        cout<<"+"<<endl;
    else if(x==y&&!z)
        cout<<"0"<<endl;
    else
        cout<<"?"<<endl;

    return 0;
}
