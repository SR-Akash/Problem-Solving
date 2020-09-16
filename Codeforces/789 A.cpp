#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    set<ll>st;
    cin>>n>>m;
    ll arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }

    cout<<st.size()<<endl;
    return 0;

}
