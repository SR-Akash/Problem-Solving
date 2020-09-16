#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[1000];

int main()

{
    ll n;
    cin>>n;
    string st;
    cin>>st;

    ll cnt=0;

    for(int i=0;i<n;i++)
    {
        if(st[i]=='B'&&st[i-1]!='B')
            cnt++;

        if(st[i]=='B')
            arr[cnt]++;
    }
    cout<<cnt<<endl;

    // ll sz=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<=cnt;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
