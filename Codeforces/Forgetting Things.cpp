#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    ll ans=abs(a-b);
    if(a==9&&b==1)
    {
        cout<<99<<" "<<100<<endl;
        return 0;
    }
    if(a>b)
    {
        cout<<-1<<endl;
        return 0;
    }

    if(ans==0||ans==1)
    {
        if(abs(b-a)==1)
            cout<<a<<" "<<b<<endl;
        else if(abs(a-b)==0)
            cout<<a<<3<<" "<<b<<4<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}

