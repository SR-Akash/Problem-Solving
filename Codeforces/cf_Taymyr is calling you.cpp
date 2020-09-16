#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,z;
    int count=0;
    cin>>n>>m>>z;
    for(int i=m;i<=z;i=i+m)
    {
        for(int j=n;j<=z;j=j+n)
        {
            if(i==j)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
