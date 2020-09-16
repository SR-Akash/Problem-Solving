#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int xn=n/2;
   cout<<xn<<endl;
    if (n%2==0)
    {
        for(i=0;i<xn-1;i++)
        {
            cout<<"2 ";
        }
       cout<<2;
    }
    if(n%2==1)
    {
        for(i=0;i<xn-1;i++)
        {
            cout<<"2 ";
        }
        cout<<3;
    }
    return 0;
}

