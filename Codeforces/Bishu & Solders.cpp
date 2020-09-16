#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n+1];
    int cnt=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int m;
    cin>>m;
    while(m--)
    {
        long long cnt=0,sum=0,secnd;
        cin>>secnd;
        for(int i=0;i<n;i++)
        {
            if(x[i]<=secnd)
            {
                cnt++;
                sum+=x[i];
            }
            else
                continue;
        }
        cout<<cnt<<" "<<sum<<endl;
    }


    return 0;

}
