#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    ll cnt=0;
    //sort(a.begin(),a.end());
    //sort(b.begin(),b.end());

    ll mxln=max(a.length(),b.length());
    for(int i=0;i<mxln;i++)
    {
        if(a[i]!=b[i])
            cnt++;
    }
    //cout<<cnt<<endl;
    if(a==b)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        cout<<mxln<<endl;
    }
    return 0;
}
