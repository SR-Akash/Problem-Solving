#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll xx;
        cin>>xx;
        string st;
        cin>>st;
        ll flag=1;
        ll len=st.length();

        for(int i=0;i<xx;i++)
        {
            ll ans=st[i]-st[len-i-1];
            if(ans%2==1||ans>2)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
