#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y,sum1=0,sum2=0,r1=0,r2,res1,res2,a,b,c;
    cin>>n;
    if(n%2!=0)
    {

         x=n/2;
        y=n-x;


    while(x!=0)
        {
            r1=x%10;
            sum1+=r1;
            x/=10;
        }
         //cout<<sum1<<endl;
        while(y!=0)
        {
            r2=y%10;
            sum2+=r2;
            y/=10;

        }
        //cout<<sum2<<endl;
        res1=sum1+sum2;
        cout<<res1<<endl;
        }
        else if(n%2==0)
        {
             a=(n/2)+1;
            b=n-a;
            cout<<a<<" "<<b<<endl;
            while(a!=0)
            {
                r1=a%10;
                sum1+=r1;
                a/=10;
            }
            while(b!=0)
            {
                r2=b%10;
                sum2+=r2;
                b/=10;
            }
            res2=sum1+sum2;
            cout<<res2<<endl;
        }

    return 0;

}
