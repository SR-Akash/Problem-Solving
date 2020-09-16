#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    set<ll>st;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        st.insert(arr[i]);
    }

    cout<<st.size()<<endl;
    return 0;

}
