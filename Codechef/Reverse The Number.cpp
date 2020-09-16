#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        ll len=st.length();
        for(int i=1;i<=len;i++)
        {
            reverse(st.begin(),st.end());
        }
        cout<<st<<endl;
    }
    return 0;
}
