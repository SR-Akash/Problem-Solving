#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string st;
    string str;
    cin>>st>>str;
    ll lenst=st.length();
    ll lenstr=str.length();
    ll mx=max(lenst,lenstr);
    ll cnt=0;
    reverse(st.begin(),st.end());
    reverse(str.begin(),str.end());
    for(int i=0;i<lenst&&i<lenstr;i++)
    {
        if(st[i]==str[i])
            cnt++;
        else
            break;
    }
    cout<<cnt<<endl;
    ll sum=lenst+lenstr;
    ll ans=sum-(2*cnt);
    cout<<ans<<endl;
    return 0;

}
