#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0,sum1=0,count=0,next=0,ta;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*(i+1)/2);
        count++;
        next=(i+1);
        ta=sum+(next*(next+1)/2);
        if(ta==n)
        {
            count++;
            break;
        }
        else if(ta>n)
            break;
    }
    cout<<count<<endl;
    return 0;
}
