#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>s;
    int n;
    string st;
    cin>>n;
    cin>>st;
    int ll=st.length();
    for(int i=0;i<ll;i++)
    {
        s.insert(st[i]);
        cout<<st<<endl;
    }
    return 0;
}
