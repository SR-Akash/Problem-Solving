#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(n%3!=0)
    cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
