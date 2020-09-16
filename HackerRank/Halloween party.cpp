#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long k,p,r,a,b;
        cin>>k;
        if(k%2)
        {
         p=k/2;
         r=p*(p+1);
        cout<<r<<endl;
        }
        else
        {
            a=(k/2);
             b=a*a;
            cout<<b<<endl;
        }

    }
    return 0;
}
