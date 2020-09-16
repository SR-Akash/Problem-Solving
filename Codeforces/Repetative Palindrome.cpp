#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    unsigned long long k;
    cin>>k;
    unsigned long long len=st.length();
    unsigned long long rev=len-1;

    for(int i=0;i<len;i++)
    {
        if(st[i]!=st[rev])
        {
            cout<<"NO"<<endl;
            return 0;
        }
        rev--;
    }
    cout<<"YES"<<endl;
    return 0;
}
