#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    int cnt=0;
    cin>>n>>a>>b;
    int ok=(a+b+n)%n;
    //cout<<ok<<endl;
    if(ok<=0)
    {
        ok+=n;
    }
    cout<<ok<<endl;
    return 0;
}
