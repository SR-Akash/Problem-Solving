#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    int ff=0;
    bool xx=false;

        string st;
        cin>>st;
        int ll=st.length();
        for(int i=0;i<ll;i++)
        {
            if(ll==1&&st[i]=='0')
                ff=1;
        }
        for(int i=0;i<ll;i++)
        {
            if((st[0]=='0'&&st[1]=='0'))
            ff=1;
        }
        for(int i=0;i<ll;i++)
        {
            if((st[ll-1]=='0'&&st[ll-2]=='0'))
                ff=1;
        }
        for(int i=0;i<ll;i++)
        {
            if(st[i]=='0'&&st[i-1]=='0'&&st[i-2]=='0')
                ff=1;
        }
        for(int i=0;i<ll;i++)
        {
            if(st[i]==st[i-1]&&st[i]=='1')
                ff=1;
        }
        while(ff)
        {
              cout<<"No"<<endl;
              return 0;
        }
        cout<<"Yes"<<endl;
    return 0;
}
