#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,str;
    cin>>st;
    str=st;
    int len=st.length();
    reverse(str.begin(),str.end());

        if(st!=str)
        {
             cout<<len<<endl;
             return 0;
        }
         else if(st==string(st.length(),st[0]))
        {
            cout<<0<<endl;
            return 0;
        }

    cout<<len-1<<endl;

    return 0;
}
