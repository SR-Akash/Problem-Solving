#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string st;
    cin>>st;
    ll ln=st.length();
    ll ok;
    ll cnt=0;
    for(int i=0;i<ln;i++)
    {
        if(st[i]=='0')
        {
           ok=i;
           break;
        }
        if(st[i]=='1')
            cnt++;
    }

    if(cnt==ln)
    {
        for(int i=0;i<ln-1;i++)
            cout<<1;
    }
    else
    {
          st.erase(st.begin()+ok);
          cout<<st;
    }

    return 0;
}
