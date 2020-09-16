#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll xx;
        cin>>xx;
        if(xx%2!=0)
            cout<<xx<<" ";
        else if(xx%2==0)
            cout<<xx-1<<" ";
    }
    cout<<endl;
    return 0;
}
