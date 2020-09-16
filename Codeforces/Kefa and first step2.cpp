#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,flag=1,max=0;
    scanf("%lld",&n);
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=arr[i+1])
            {
                flag++;
            }
            else
                flag=1;
            if(flag>max)
                max=flag;

        }

    printf("%lld",max);
    return 0;

}
