#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int>vc;
    ll n,m,ok,ans,res;
    int arr[1005];
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    res=arr[n-1]-arr[0];
    for(int i=1;i<=m-n;i++)
    {
        ans=arr[i+n-1]-arr[i];
        res=min(res,ans);
    }
    cout<<res<<endl;
    return 0;
}
