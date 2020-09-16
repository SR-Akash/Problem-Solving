#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,c1=0,sum1=0,sum2=0;
    cin>>a>>b;
    int mid=abs(a+b)/2;
    int x=abs(mid-a);
    //cout<<x<<endl;
    int y=abs(b-mid);
    //cout<<y<<endl;

    for(int i=1;i<=x;i++)
        sum1+=i;
       // cout<<sum1<<endl;
    for(int j=1;j<=y;j++)
    sum2+=j;
    //cout<<sum2<<endl;
    int sum=sum1+sum2;
    cout<<sum<<endl;

    return 0;
}
