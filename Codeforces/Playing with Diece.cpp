#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll win=0,draw=0,lose=0;
    for(int i=1;i<=6;i++)
    {
        ll xx=abs(i-n);
        ll yy=abs(i-k);
        if(xx<yy)
            win++;
        else if(xx>yy)
            lose++;
        else
            draw++;
    }
     cout<<win<<" "<<draw<<" "<<lose<<endl;
    return 0;
}
