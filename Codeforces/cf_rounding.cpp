#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,xx,yy,zz;
    cin>>n;
    int flag=0;
    if(n<=5)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {

        xx=n/10;
        yy=n%10;
        if(yy==0)
        {
            cout<<n<<endl;
            return 0;
        }
        if(yy!=0&&yy<=5)
        {
            n--;


        }

        else if(yy!=0&&yy>5)
        {
               n++;

        }

    }
      cout<<n<<endl;
       return 0;

}
