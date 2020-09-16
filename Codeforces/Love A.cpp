#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string st;
    cin>>st;
    ll len=st.length();
    ll cnt=0;
    for(int i=0;i<len;i++)
    {
        if(st[i]=='a')
            cnt++;
    }
    if(cnt>len/2)
    cout<<len<<endl;
    else if(cnt<=len/2)
    {
        cout<<min(len,cnt*2-1)<<endl;
    }
    return 0;
}
