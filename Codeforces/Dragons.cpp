#include<bits/stdc++.h>
using namespace std;
int x[500005],y[500005];
int main()
{

    int s,n,sum=0,flag=0;
    cin>>s>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i=0;i<n;i++)
    {
        if(s>x[i])
        {
            s=s+y[i];
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
             cout<<"NO"<<endl; return 0;
        }
    }
        return 0;
}
