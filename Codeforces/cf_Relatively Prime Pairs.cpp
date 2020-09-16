#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    cin>>l>>r;
    bool xx=false;
    for(long long i=1;i<2;i++)
    {
        if((i+1)-(i)==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    int test=(r-l)/2+1;
    for(long long i=0;i<test;i++)
    {
        if((i+1)-(i)==1)
        {
            cout<<(i*2)+l<<" "<<(i*2)+l+1<<endl;
        }
    }

    return 0;
}
