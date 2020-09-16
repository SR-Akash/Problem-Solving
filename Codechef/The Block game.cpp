#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string st;
        cin>>st;
        string str=st;
        reverse(st.begin(),st.end());
        if(str==st)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;
    }

    return 0;
}
