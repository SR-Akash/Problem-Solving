#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    string st;
    cin>>st;
    while(k--)
    {
        ll l,r;
    char c1,c2;
    cin>>l>>r>>c1>>c2;
    for(int i=l-1;i<r;i++)
    {
        if(st[i]==c1)
            st[i]=c2;
    }

    }
    cout<<st<<endl;

    return 0;

}
