#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int ll=st.length();
    int flag=0;
    for(int i=0;i<ll;i++)
    {
        if(st[i]=='W'&&st[i+1]=='U'&&st[i+2]=='B')
        {
                st[i]=' ';
                st[i+1]=' ';
                st[i+2]=' ';

        }
    }
    cout<<st;
    return 0;
}
