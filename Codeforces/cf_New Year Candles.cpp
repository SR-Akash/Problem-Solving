#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,div,div2,sum,ll,c=0,p,y,x;
    cin>>a>>b;

    {
        int sum=a;
        while(a>=b)
        {
           div=a/b;
           sum+=div;
           p=a%b;
           a=div+p;
        }

      cout<<sum<<endl;
    }

    return 0;
}
