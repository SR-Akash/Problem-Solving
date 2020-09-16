#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string st;
    cin>>n>>st;
    int ll=st.length();
    sort(st.begin(),st.end());
    reverse(st.begin(),st.end());
    for(int i=0;i<n;i++)
    {
        if(ll==1&&st[i]=='0')
        {
            cout<<"0"<<endl;
        return 0;
        }
        else if(ll==1&&st[i]=='1')
        {
            cout<<"1"<<endl;
        return 0;
        }

    }
    for(int i=0;i<n;i++)
    {
        if(st[i]=='1')
            continue;
    }
    cout<<"1";
    for(int i=0;i<n;i++)
    {
        if(st[i]=='0')
            cout<<st[i];
    }
    cout<<endl;
    return 0;
}
