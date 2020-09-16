#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        ll cnt=0;
        ll len=st.length();
        for(int i=0;i<len;i++)
        {
            if(st[i]=='4')
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
