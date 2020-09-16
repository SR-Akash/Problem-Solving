#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll node,edge;
    ll arr[105][105];
    cin>>node>>edge;
    ll n1,n2,cost;
    for(int i=0;i<edge;i++)
    {

       cin>>n1>>n2>>cost;

       arr[n1][n2]=cost;
       arr[n2][n1]=cost;
    }
    for(int i=0;i<edge;i++)
    {
       arr[n1][n2]=cost;
       arr[n2][n1]=cost;
       cout<<arr[n1][n2]<<endl;
       cout<<arr[n2][n1]<<endl;
    }



    return 0;
}

