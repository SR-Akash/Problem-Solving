#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>l;
    vector<char>ll;
    string s;
    string st;
    cin>>s>>st;
    reverse(st.begin(),st.end());
    int i,j;
    int len=s.length();
    int lenn=st.length();
    for( i=0;i<len;i++)
    {
        l.push_back(s[i]);
    }
    for( j=0;j<lenn;j++)
    {
        ll.push_back(st[j]);
    }
    if(l==ll)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
