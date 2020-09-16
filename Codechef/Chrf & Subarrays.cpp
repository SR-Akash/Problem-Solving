#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll nn;
        cin>>nn;
        ll arr[nn+5];
        for(int i=0;i<nn;i++)
        {
            cin>>arr[i];
        }
        ll sum=0,mul=1;
        ll cnt=0;
        for(int i=0;i<nn;i++)
        {
            sum+=arr[i];
            mul*=arr[i];
            for(int j=i;j<nn;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    if(sum==mul)
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
