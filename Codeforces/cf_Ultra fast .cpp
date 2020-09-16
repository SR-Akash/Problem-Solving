#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string st;
    while(cin>>str>>st)
    {
      int len=str.length();
    int lenn=st.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]==st[i])
            cout<<"0";
        else
            cout<<"1";
    }
    cout<<endl;
    }

    return 0;
}
