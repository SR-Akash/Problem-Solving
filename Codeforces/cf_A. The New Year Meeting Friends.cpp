#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
    {
        if(b>=c)
        {
           int x=(a-b)+(b-c);
        cout<<abs(x)<<endl;
        }

        else
        {
            int y=(a-c)+(c-b);
            cout<<abs(y)<<endl;
        }

    }
    else if(b>=a&&b>=c)
    {
        if(a>=c)
        {
            int z=(b-a)+(a-c);
            cout<<abs(z)<<endl;
        }

        else
        {
            int p=(a-c)+(c-b);
            cout<<abs(p)<<endl;
        }

    }
    else if(c>=a&&c>=b)
    {
        if(a>=b)
        {
            int q=(c-a)+(a-b);
            cout<<abs(q)<<endl;
        }

        else
        {
            int l=(c-b)+(b-a);
            cout<<abs(l)<<endl;
        }

    }


    return 0;

}
