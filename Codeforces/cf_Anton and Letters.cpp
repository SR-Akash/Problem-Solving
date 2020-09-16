#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        st.insert(i);
    }
    cout<<st.size()<<endl;
    return 0;
}
