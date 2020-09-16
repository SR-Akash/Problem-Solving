#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    set<char>st;
    string ss;
    getline(cin,ss);
    ll len=ss.length();
    for(int i=0;i<len;i++)
    {
        if(ss[i]>='a'&&ss[i]<='z')
            st.insert(ss[i]);
    }
    cout<<st.size()<<endl;

    return 0;
}
