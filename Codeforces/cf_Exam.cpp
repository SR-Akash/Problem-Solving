#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vc;
    vector<int>v;
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<n<<endl;
        cout<<n<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<n-1<<endl;
        cout<<n-1<<endl;
        return 0;
    }

    if(n==3)
    {
        cout<<n-1<<endl;
         for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
                continue;
            }

        }
    }
    else
    {
        cout<<n<<endl;
        for(int j=1;j<=n;j++)
        {
              if(j%2==0)
               cout<<j<<" ";
        }

        for(int i=1;i<=n;i+=2)
        {
            if(i%2!=0)
            cout<<i<<" ";

        }


    }
    return 0;

}
