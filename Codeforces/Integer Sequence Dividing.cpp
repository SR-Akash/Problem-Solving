#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,sum=0,xx,yy,ans,res;
    cin>>n;
    res=n*(n+1)/2;
    //cout<<res<<endl;
    xx=res/2;
    yy=res-xx;
    ans=abs(xx-yy);
    cout<<res<<endl;
    return 0;
}
