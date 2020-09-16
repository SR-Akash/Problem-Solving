#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    string st;
    cin>>n;
    cin>>st;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(st[i]=='0')
            cnt++;
        else
            cnt--;
    }
    cout<<abs(cnt)<<endl;

    return 0;
}
