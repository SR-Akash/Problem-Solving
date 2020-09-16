#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        int odd=(n/2);
        int zz=n-odd;
        cout<<odd<<" "<<zz<<endl;

    }
    else
    {
         if(n%4!=0)
         {
            int test=(n/2)-2;
            int ans=(n/2)+2;
            cout<<test<<" "<<ans<<endl;
         }

        else
        {
           int odd=(n/2)-1;
           int zz=(n/2)+1;
        cout<<odd<<" "<<zz<<endl;
        }

    }

return 0;
    }


