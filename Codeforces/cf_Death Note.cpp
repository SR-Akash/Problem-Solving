#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int xx;
        cin>>xx;
        sum+=xx;
        int ans=sum/m;
        cout<<ans<<" ";
         sum=sum%m;
    }
    cout<<endl;
    return 0;


}
