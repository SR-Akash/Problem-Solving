#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    if(n>=12)
    {
        cin>>n;
        if(n%2==0)
        {
            int x=n/2;
            int y=n-x;
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            int a=n/2;
            int b=n-a;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}
