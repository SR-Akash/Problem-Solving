#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
int main()
{
    ull a,b,sum=0;
    cin>>a>>b;
    for(ull i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
