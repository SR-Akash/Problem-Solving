#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[100];

int main()
{

    ll n,m;
    cin>>n>>m;

    ll a,b;
    for(int i=1;i<=n;i++)
    {

        cin>>a>>b;
        for(int j=a;j<=b;j++)
        arr[j]=true;
    }

    ll cnt=0;
    for(int i=1;i<=m;i++)
    {
        if(arr[i]==0)
            cnt++;
    }

    cout<<cnt<<endl;

    for(int ii=1;ii<=m;ii++)
    {
        if(arr[ii]==false)
            cout<<ii<<" ";
    }
   return 0;
}

