#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int an[1005],am[1005];
    cin>>n>>m;
    int cnt=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>an[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>am[j];
    }
    for(int i=0;i<n;i++)
    {
        if(an[i]<=am[res])
        {
            res++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
