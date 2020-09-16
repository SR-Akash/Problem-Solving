#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc;
    string st;
    cin>>st;
    ll len=st.length();
    ll ok=((st[len-2]-'0')*10)+(st[len-1]-'0');
    if(ok%4!=0)
        {
            cout<<0<<endl;
            return 0;
        }
    else
        cout<<4<<endl;

    return 0;
}
