#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
           ll taka=0;
           ll n;
           cin>>n;
           if(n>=100)
           {
               taka=taka+n/100;
               n=n%100;

           }
           if(n>=50)
           {

               taka=taka+n/50;
               n=n%50;
           }
           if(n>=10)
           {
               taka=taka+n/10;
               n=n%10;

           }
           if(n>=5)
           {
               taka=taka+n/5;
               n=n%5;
           }
           if(n>=2)
           {
               taka=taka+n/2;
               n=n%2;
           }
           if(n>=1)
           {
               taka=taka+n/1;
               n=n%1;
           }
           cout<<taka<<endl;
    }



    return 0;
}

