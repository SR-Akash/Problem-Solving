#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string st;
    cin>>st;
    ll len=st.length();
    ll count=0;
    for(int i=0;i<len;i++)
    {
        if(st[i]=='D'&&st[i+1]=='a'&&st[i+2]=='n'||st[i]=='O'&&st[i+1]=='l'&&st[i+2]=='y'&&st[i+3]=='a'||st[i]=='S'&&st[i+1]=='l'&&st[i+2]=='a'||st[i]=='A'&&st[i+1]=='n'&&st[i+2]=='n'||st[i]=='N'&&st[i+1]=='i'&&st[i+2]=='k'&&st[i+3]=='i'&&st[i+4]=='t'&&st[i+5]=='a')
          count++;
    }
    if(count==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
