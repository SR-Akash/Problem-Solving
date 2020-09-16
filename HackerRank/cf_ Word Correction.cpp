#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string::iterator it;
    while(cin>>n)
    {
        string st;
        cin>>st;
        int len=st.length();
        bool vo=false,vol=false;
        for(int i=1;i<=n;i++)
        {
            if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='y')
            {
                if(st[i-1]=='a'||st[i-1]=='e'||st[i-1]=='i'||st[i-1]=='o'||st[i-1]=='u'||st[i-1]=='y')
                {
                    st[i]=st[i-1];
                    st[i-1]=-1;
                }

            }
        }

        for(int i=0;i<n;i++)
           if(st[i]!=-1)
            cout<<st[i];
            cout<<endl;
        }
        return 0;
}
