#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];

    for(int i=1;i<=n;i++)
    {
         ll prm=0;
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)
                prm++;
        }

        if(prm==2)
            cout<<i<<" ";

    }

    return 0;

}
