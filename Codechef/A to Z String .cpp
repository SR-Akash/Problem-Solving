#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    set<char>sat;
    string st;
    cin>>st;
    ll len=st.length();
    ll cnt=0;
    ll ok=1,hm=1;
    for(int i=0;i<len;i++)
    {
        if(st[i]=='A')
        {
            break;
        }
        ok++;
    }
     for(int j=len-1;j>=0;j--)
    {
        if(st[j]=='Z')
        {
            break;
        }
        hm--;
    }
     cout<<hm-ok+1<<endl;

    return 0;

}
