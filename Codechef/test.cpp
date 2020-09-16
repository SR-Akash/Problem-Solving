#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,q;
    cin>>n>>q;
    ll arr[q+5];

    for(int i=0;i<q;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+q);
    ll sum=0;
    ll cnt=0;
    for(int i=0;i<q;i++)
    {
        sum+=arr[i];
        //cout << sum << endl;
        if(sum<=n)
        cnt++;
          else
        break;
    }
    cout<<cnt<<endl;
    return 0;
}
