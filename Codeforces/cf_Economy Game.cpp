#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,xx,yy;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        xx=n/1234567;
    }
    for(long long i=0;i<n;i++)
    {
         yy=n/123456;
    }
    long long zz=n-xx*1234567-yy*123456;
    if(zz/1234==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
