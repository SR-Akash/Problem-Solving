#include<bits/stdc++.h>
#define ll long long
ll arr[10000005];
using namespace std;

void sieve()
{
    arr[0]=arr[1]=1;
    for(int i=2;i<sqrt(10000005);i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+i;j<10000005;j+=i)
            {
                arr[j]=1;
            }
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    sieve();
    for(int k=0;k<n;k++)
    {
        ll num1;
        cin>>num1;

            ll sroot=sqrt(num1);
            if(sroot*sroot!=num1)
                cout<<"NO"<<endl;
            else
            {
                if(arr[sroot]==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
    }
    return 0;
}
