#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,x,y;
    cin>>n>>k;
    {
        if(n%2==0)
           x=n/2;
        else if(n%2==1)
           x=(n/2)+1;
    }
    {
       if(k<=x)
           y=(k*2)-1;
       else if(k>x)
           y=(k-x)*2;
    }

       cout<<y<<endl;

    return 0;
}
