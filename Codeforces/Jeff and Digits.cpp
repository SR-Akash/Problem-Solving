#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    ll cnt=0,czero=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==5)
            cnt++;
            else
                czero++;
    }
    if(cnt==n)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(cnt<9)
        cout<<0<<endl;
    else
       {
        sort(arr,arr+n);
        reverse(arr,arr+n);
        vector<int> ok;
        for(int i=0;i<n;i++)
        {
            ok.push_back(arr[i]);
        }
        ll hm;
        for(int i=0;i<cnt/9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<5;
            }
        }
        for(int i=0;i<czero;i++)
            cout<<0;
        cout<<endl;
     }

    return 0;
}
