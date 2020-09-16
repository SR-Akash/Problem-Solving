#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,st;

    while(cin>>str)
    {
        int len=str.length();
        for(int i=0;i<len;i++)
            {
                str[i]=tolower(str[i]);
                if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')
                cout<<"."<<str[i];
            }
    }

        return 0;
}
