#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
    {
        cout<<"No";
        return 0;
    }
    else
    {
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'))
                cnt++;
            else if(((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(t[i]!='a'&&t[i]!='e'&&t[i]!='i'&&t[i]!='o'&&t[i]!='u')))
                cnt++;
            else break;
        }
        if(cnt==s.length())
            cout<<"Yes";
        else
            cout<<"No";
    }
    return 0;
}
