#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int t,tt,product,sum,c,i,j,k,n;
    cin>>t>>tt;
    int a[t+6];
    for(i=0;i<t;i++)
    {
        c=0;
        cin>>a[i];
        for(j=0;j<t;j++)
        {
            sum=0;
            product=1;
            for(k=j;k<t;k++)
            {
                product*=a[k];
                sum+=a[k];
            }
        }
        cout<<product<<" ";
        cout<<sum<<" ";
    }


}
