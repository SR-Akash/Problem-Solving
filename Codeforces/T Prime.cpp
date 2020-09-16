#include<bits/stdc++.h>
#define ll long long
ll arr[10000005];
using namespace std;

void sieve()
{

    for(int i=2;i<=sqrt(10000005);i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*2;j<=10000005;j+=i)
            {
                arr[j]=1;
            }
        }
        //cout<<arr[j]<<" "<<endl;
    }
}

int main()
{
    ll t;
    cin>>t;
    sieve();
    for(int i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        if(n==1||n==2||n==3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            ll srot=sqrt(n);
            if(srot*srot==n&&!arr[srot])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
