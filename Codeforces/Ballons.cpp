#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[10005];
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    ll arrcopy[10005];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arrcopy[i]=arr[i];
        sum+=arr[i];
    }

    sort(arr,arr+n);
    ll ok=arr[0];
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n==2)
    {
        for(int i=0;i<n;i++)
        {
             if(arr[i]==arr[i+1])
             {
                 cout<<-1<<endl;
                return 0;
             }
             else
             {
                 cout<<1<<endl;
                 for(int i=0;i<n;i++)
                   {
                     if(arrcopy[i]==ok)
                       {
                         cout<<i+1<<endl;
                         return 0;
                        }
                   }
             }
        }
    }
    else
    {
        cout<<1<<endl;
        for(int i=0;i<n;i++)
        {
            if(arrcopy[i]==ok)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    cout<<endl;

    return 0;
}
