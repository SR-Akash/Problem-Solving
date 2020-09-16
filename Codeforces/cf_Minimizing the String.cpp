#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string st;
    int cnt=0;
    bool xx=false;
    cin>>n>>st;
    int ll=st.length();
    for(int i=0;i<ll-1;i++)
    {
        if(st[i]>st[i+1])
        {
            st[i]='1';
            xx=true;
            break;
        }
    }
    if(xx)
    {
        for(int i=0;i<ll;i++)
            {
                if(st[i]!='1')
                cout<<st[i];
            }
    }
    else
    {
        for(int i=0;i<ll-1;i++)
            cout<<st[i];
    }
    cout<<endl;
    return 0;

}
