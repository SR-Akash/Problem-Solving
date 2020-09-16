#include<bits/stdc++.h>
using namespace std;
   void sieve(int n)
   {
       bool prime[n+1];
       memset(prime,true,sizeof(prime));
       for(int p=2;p*p<=n;p++)
       {
           if (prime[p]==true)
           {
               for(int i=p*p;i<=n;i+=p)
               {
                   prime[i]=false;

               }
           }
       }
       for(int p=2;p<=n;p++)
       {

           if(prime[p])
           {
       int a=n/p;
       int b=n%p;
       n=b;
        cout<<"("<<a<<","<<p<<")";
           }
   }
   }
       int main()
       {
           int n=120;
           sieve(n);
           return 0;

   }
