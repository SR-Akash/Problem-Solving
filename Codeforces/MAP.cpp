#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    map<string,int>m;
    ll n; cin>>n;
    while(n--)
    {
        ll tp;
        cin>>tp;
        string s;
        ll mark;

        if(tp==1)
        {
             cin>>s>>mark;
             m[s] += mark;
        }

        else if(tp==2)
        {
            cin>>s;
            m[s]=0;
        }
        else
        {
            cin>>s;
            cout << m[s] << endl;
        }
    }


    return 0;
}
