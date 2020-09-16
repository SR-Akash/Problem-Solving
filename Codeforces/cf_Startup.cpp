#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    string str;
    int flag=0;
    cin>>st;
    str=st;
    int ll=st.length();
    for(int i=0;i<ll;i++)
    {

        reverse(st.begin(),st.end());

    }
   for(int i=0;i<ll;i++)
   {
       if(st[i]!='A'&& st[i]!='H'&&st[i]!='I'&&st[i]!='M'&&st[i]!='O'&&st[i]!='T'&&st[i]!='U'&&st[i]!='V'&&st[i]!='W'&&st[i]!='X'&&st[i]!='Y')
        {
            flag=1;
        }
   }
    if(ll==1||ll==2)
    {
        cout<<"NO"<<endl;
       return 0;

    }
    if(flag=1)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    else
        cout<<"YES"<<endl;

    return 0;
}
