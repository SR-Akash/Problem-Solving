#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    stack<ll>stk;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        stk.push(x);
    }
    //stk.pop();// for remove top element
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();// it must give after cout
    }
}

