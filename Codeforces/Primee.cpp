#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[1000];
vector<int>vc;
void sieve()
{
    memset(arr,0,sizeof(arr));
    for(int i=2;i<=120;i++)
    {
        if(arr[i]==0)
        {
            vc.push_back(i);
            for(int j=i*2;j<=120;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=120;i++)
    {
        if(arr[i]==0)
            cout<<i<<" ";
    }
}
int main()
{
    sieve();
    ll n;
    ll m;

    return 0;
}
