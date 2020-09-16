#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long n,x,y,z,res,final;
    cin>>n;
   unsigned long long sum=1;
    for(long long i=0;i<n;i++)
    {
        sum*=1378;
    }
    x=sum/10;
    res=sum%10;
cout<<res<<endl;
    return 0;
}
