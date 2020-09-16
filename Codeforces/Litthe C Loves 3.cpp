#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x,y,b,c;
    cin>>n;

    a=n/2;
    x=n-a;
    b=x/2;
    c=x-b;

    if(a%3==0||y%3==0||b%3==0)
        {
            a=n/3;
            x=n-a;
            b=x/2;
            c=x-b;
    cout<<a<<" "<<b<<" "<<c<<endl;
        }

    else
        cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;

}
