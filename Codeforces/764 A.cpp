#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m,z;
    cin>>n>>m>>z;
    ll a=0,b=0;
    vector<ll>vc,vcc;
    ll arr[10000],arr1[10000];
    for(int i=n;i<=z;i+=n)
    {
        arr[i]=i;
    }
    for(int i=m;i<=z;i+=m)
    {
        arr1[i]=i;
    }




    ll cnt=0;

    for(int i=0;i<z;i++)
    {
        if(arr[i]==arr1[i]&&arr[i]!=0)
            cnt++;

    }
    cout<<cnt<<endl;


    return 0;

}
