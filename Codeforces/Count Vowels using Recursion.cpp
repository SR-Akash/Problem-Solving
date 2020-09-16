#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll vow(string st)
{
    ll cnt=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
            cnt++;
    }
    return cnt;

}
int main()
{
    string st;
    getline(cin,st);
    cout<<vow(st);

    return 0;
}



