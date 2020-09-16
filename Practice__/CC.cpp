#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    string st;
    cin>>n>>st;

    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(st[i]!=st[i-1])
            cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
