#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int a,b,count=0,sum=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
            sum+=i;
        }
         cout<<"Case "<<k<<": "<<sum<<endl;
         k++;
    }

    return 0;
}
