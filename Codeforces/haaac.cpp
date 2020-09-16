#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,q;
    while (cin>>q)
    {
        while (q--)
        {
            cin>>a>>b>>c>>d;
            if (b!=c)
            {
                cout<<b<<" "<<c<<endl;
            }
            else
            {
                 cout<<b<<" "<<d<<endl;
            }

        }
    }
    return 0;
}
