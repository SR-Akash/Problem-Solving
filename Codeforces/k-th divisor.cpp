
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,z,p;
    cin>>n;
    x=pow(1378,n);
    if(n==1)
        cout<<x%10<<endl;
    else
    {
    y=x+1;
    z=y%10;
    cout<<z<<endl;
    }

    return 0;
}
