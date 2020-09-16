#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[1000];
vector<int>vc;
void sieve()
{
   // memset(arr,0,sizeof(arr));
    for(int i=2;i<=51;i++)
    {
        if(arr[i]==0)
        {
            vc.push_back(i);
            for(int j=i*2;j<=51;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    /*for(int i=2;i<=51;i++)
    {
        if(arr[i]==0)
            cout<<i<<" ";
    }*/
}
int main()
{
    sieve();
    ll n;
    //cin>>n;
    ll m;
    cin>>n>>m;

    for(int i=0;i<vc.size();i++)
    {
        if(vc[i]==n&&vc[i+1]==m)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
