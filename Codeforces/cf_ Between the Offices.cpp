#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    int len=st.length();
    for(int i=0;i<len;i++)
    {
        if(st[0]=='S'&&st[len-1]=='F')
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
}
