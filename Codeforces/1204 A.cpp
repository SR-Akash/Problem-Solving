#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{


    string st;
    cin>>st;
    ll len=st.length();
    for(int i=len-1;i>0;i--)
    {
        if(st[i]=='1')
        {
            len++;
            break;
        }
    }
    cout<<len/2<<endl;
    return 0;
}
