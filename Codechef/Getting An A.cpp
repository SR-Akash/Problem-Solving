#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    int sum=0,avg,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int ok=n*5-n/2;
    int k=0;
    while(sum<ok)
    {
        sum+=5-arr[k++];
    }
    cout<<k<<endl;
    return 0;
}
