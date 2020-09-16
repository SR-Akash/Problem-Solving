#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    ll x1,x2,y1,y2;
    cin>>n;
    ll res=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        res+=((x2-x1)+1)*((y2-y1)+1);
        //res+=res+2;
    }
    cout<<res<<endl;
    return 0;
}
