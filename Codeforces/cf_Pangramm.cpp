#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>s;
    int n;
    string st;
    int ll=st.length();
    cin>>n>>st;
    for(int i=0;i<n;i++)
    {
         st[i]=toupper(st[i]);
    }
    for(int i=0;i<n;i++)
    {
         s.insert(st[i]);
    }

    if(s.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
