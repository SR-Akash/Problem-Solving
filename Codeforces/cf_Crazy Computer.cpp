#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,c;
   long long count=0;
   cin>>n>>c;
   bool xx=false;
   long long arr[n+1];
   for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
    for(int i=0;i<n;i++)
        {
           if(arr[i]-arr[i-1]<=c)
           {
               xx=true;
               count++;
           }
            else
            {
                xx=false;
                count=1;
            }
        }

        cout<<count<<endl;
        return 0;

}
