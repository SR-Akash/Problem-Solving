#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string st;
    cin>>st;
    ll len=st.length();
    ll cnt=0;
    while(len>9)
    {
        ll sum=0;
        for(ll i=0;i<len;i++)
            sum+=st[i]-'0';

        st=to_string(sum);
        len=st.length();
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

