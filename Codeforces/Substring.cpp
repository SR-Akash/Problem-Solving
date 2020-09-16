#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string st;
    cin>>n>>st;

    int len=st.length();
    for(int i=1;i<len;i++)
    {
        if(st[i]!=st[i-1])
        {
            cout<<"YES"<<endl;
            for(int j=i-1;j<=i;j++)
            cout<<st[j];
            return 0;
        }

    }
    cout<<"NO"<<endl;

    return 0;
}
