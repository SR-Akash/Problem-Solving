#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,v;
    cin>>n>>v;
    if(v>=n)
    {
        cout<<n-1<<endl;
        return 0;
    }

    ll tel=v;
    n--;
    //v--;
    ll i=2;
    while(n!=v)
        {
            n--;
            tel+=i;
            //tel--;
            i++;
        }
        cout<<tel<<endl;



    return 0;
}
