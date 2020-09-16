#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag=0,count=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        int xx = sizeof(arr)/sizeof(arr[]);
        sort(arr, arr+xx, greater<int>());
        cout<<arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]-arr[i-1]==1)
        {
            flag=0;
        }

    }
   for(int i=0;i<=n;i++)
   {
       if(arr[i]-arr[i-1]==1)
        {
            count++;
            //cout<<count<<endl;
        }
   }



    return 0;
}
