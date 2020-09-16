#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w,sum=0,mul;
    cin>>k>>n>>w;
    for(int i=0;i<=w;i++)
    {
        mul=k*i;
        sum+=mul;

    }

     n=sum-n;
     //cout<<n<<endl;
    if(n<0)
        cout<<0<<endl;
    else
      cout<<n<<endl;
    return 0;
}
