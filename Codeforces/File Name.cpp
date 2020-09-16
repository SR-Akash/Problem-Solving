#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    int count=0;
    for(int i=0;i<st.length();i++)
    {

        if(st[i]=='x'&&st[i+1]=='x'&&st[i+2]=='x')
            count++;
    }
    cout<<count<<endl;
    return 0;
}
