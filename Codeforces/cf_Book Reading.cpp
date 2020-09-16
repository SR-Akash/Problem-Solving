#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,count=0;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int t=(86400-a);
        int ll=t-t;
        if(ll>0)
        count++;

    }
    cout<<count+1<<endl;
    return 0;
}
