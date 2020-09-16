#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long sum=0,add=0,aka=0,tah=0,ans=0,res=0;
    long long xx,yy;
    long long flag=0;
    for(long long i=0;i<t;i++)
    {
        long long ans=0,res=0;
        sum=0,add=0,aka=0,tah=0,ans=0,res=0;
        long long a,b,k;
        cin>>a>>b>>k;
        xx=k/2;
        yy=k-xx;
        if(k%2!=0)
        {

             for(long long j=0;j<xx;j++)
             {
                 sum+=b;
             }
             for(long long k=0;k<yy;k++)
            {
               add+=a;
            }
            long long res=add-sum;
        cout<<res<<endl;
        continue;

        }

        else if(k%2==0)
        {
            for(long long i=0;i<k;i++)
            {
                aka+=a;
                tah+=b;
            }
         long long ans=aka-tah;
            cout<<ans/2<<endl;
            continue;

        }
    }

    return 0;

}
