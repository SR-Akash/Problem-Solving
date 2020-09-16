#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
   {
       if(n<m||n==m)
       {
           if(n%2!=0)
             cout<<"Akshat"<<endl;
             else
              cout<<"Malvika"<<endl;

       }
       else if(n>m||n==m)
       {
           if(m%2!=0)
            cout<<"Akshat"<<endl;
           else
           cout<<"Malvika"<<endl;
       }

   }
    return 0;
}
