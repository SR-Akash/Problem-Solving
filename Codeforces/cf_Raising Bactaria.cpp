#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,count=0;
    cin>>n;
    while(n>0)
    {

        if(n%2!=0)
        {
          count++;
            n--;
        }

        else
            n=n/2;

    }
    cout<<count<<endl;
    return 0;
}
