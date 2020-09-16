#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int ll=st.length();
    for(int i=0;i<ll;i++)
    {
        if(st[i]=='-')
        {
            if(st[i+1]=='-')
            {
                cout<<2;i++;
            }
            else if(st[i+1]=='.')
            {
                 cout<<1;i++;
            }
        }
        else cout<<0;
    }
    cout<<endl;
    return 0;
}
