#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll a,b;

    while(cin>>a>>b)
    {
       if(a>b)
       {
           swap(a,b);
       }
       ll sum=0;
           for(ll i=a;i<=b;i++)
        {

            sum+=i;

        }


        cout<<sum<<endl;

    }


    return 0;
}

