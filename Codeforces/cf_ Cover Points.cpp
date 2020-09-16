#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        long long x,y,res=0,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            sum=x+y;
            if(sum>res)
                res=sum;
        }
        cout<<res<<endl;
    }
    return 0;
}
