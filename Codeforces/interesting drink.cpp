#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
    cin>>n;
    int x[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    int m;
    cin>>m;
    while(m--)
    {
        int cnt=0,secnd;
        cin>>secnd;
        int res=upper_bound(x,x+n,secnd)-x;
        cout<<res<<endl;
    }


    return 0;

}
