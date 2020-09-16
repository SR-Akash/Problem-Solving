#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    long long len=st.length();
    for(int i=0;i<len;i++)
    {
        if(st[i]=='0'||st[i]=='2'||st[i]=='3'||st[i]=='5'||st[i]=='6'||st[i]=='7'||st[i]=='8'||st[i]=='9')
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
           cout<<"YES"<<endl;
        return 0;
        }



    }

    return 0;
}
