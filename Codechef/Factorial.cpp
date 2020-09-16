#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned int t=0;
cin>>t;

unsigned long long n=0;
while(t--)
    {
    unsigned long long c=0;
    cin>>n;

    for(unsigned long long i=5;n/i>=1;i*=5)
        {
        c+=n/i;
        }
    cout<<c<<"\n";
    }
return 0;
}
