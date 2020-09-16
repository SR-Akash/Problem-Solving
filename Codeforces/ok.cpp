#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string st;
        cin>>st;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {

            if(st[i]!='a'||st[i]!='e'||st[i]!='i'||st[i]!='o'||st[i]!='u')
            {
                if( st[i+1]=='a'||st[i+1]=='e'||st[i+1]=='i'||st[i+1]=='o'||st[i+1]=='u')
                 cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
