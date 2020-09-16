#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long s,a,b,c,sum,total,free,x,res,y;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        total=s/c;
        x=total/a;
        y=x*b;
        res=total+y;

cout<<res<<endl;
    }


    return 0;
}
