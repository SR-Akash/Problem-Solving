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

            reverse(st.begin(),st.end());

        ll flag=1;
        for(int i=0;i<len;i++)
        {
            if(flag==1&&st[i]!='0')
                {flag=0;}
            if(flag==0)
            {
                cout<<st[i];
            }

        }
        cout<<endl;
        if(flag)
            cout<<0<<endl;
    }
    return 0;
}

