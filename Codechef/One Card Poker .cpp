#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    if(a==1&&b!=1)
        cout<<"Alice"<<endl;
    else if(b==1&&a!=1)
        cout<<"Bob"<<endl;
    else if(a==b)
        cout<<"Draw"<<endl;
    else
    {
        if(a!=1&&b!=1&&a>b)
            cout<<"Alice"<<endl;
        if(a!=1&&b!=1&&a<b)
            cout<<"Bob"<<endl;
    }
    return 0;
}
