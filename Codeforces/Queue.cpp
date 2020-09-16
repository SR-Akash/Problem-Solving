#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    queue<ll>qq;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        qq.push(x);
    }
    qq.pop();// for remove top element
    while(!qq.empty())
    {
         cout<<qq.front()<<" ";
        qq.pop();// it must give after cout
    }
}
