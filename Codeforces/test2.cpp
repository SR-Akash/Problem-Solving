#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int ara[n];
    int sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);


    reverse(ara,ara+n);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=ara[i];
        }
        else
        {
           ans+=ara[i];
        }
    }
   cout<<max(sum,ans)<<" ";
   cout<<min(sum,ans)<<endl;
}
