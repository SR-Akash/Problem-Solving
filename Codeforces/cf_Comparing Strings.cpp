#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string st;
    cin>>s>>st;
    int ll=s.length();
    for(int i=0;i<ll;i++)
    {
        if(s[i]!=st[i])
            swap(s[i+1],s[i]);
        if(st[i]==s[i+1])
            cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
