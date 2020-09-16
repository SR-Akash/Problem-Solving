#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ll on=0,tw=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            on++;
        else
            tw++;
    }
    if(on>tw)
        cout<<tw+(on-tw)/3<<endl;
    else
        cout<<on<<endl;
    return 0;

}
