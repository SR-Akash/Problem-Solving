#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,str;
    cin>>st;

    int len=st.length();
    reverse(st.begin(),st.end());
    str=st;
    for(int i=0;i<st.length();i++)
    {
        if(len<=3&&str[i]!=str[i+1]&&str==st)
        {
             cout<<len<<endl;
             return 0;
        }
         else if(len>3&&str==st&&str[0]==str[len-1])
        {
            cout<<len-1<<endl;
            return 0;
        }
        if(str[i]!=str[i+1]&&str==st)
        {
             cout<<len<<endl;
             return 0;
        }


        else if(len>3&&str==st&&str[0]!=str[len-1])
        {
            cout<<len<<endl;
            return 0;
        }
        else if(str[i]==str[i+1]&&str==st)
        {
             cout<<0<<endl;
             return 0;
        }


    }

    return 0;
}
