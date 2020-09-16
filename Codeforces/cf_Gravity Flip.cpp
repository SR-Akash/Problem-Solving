#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vc;
    int n,xx;

    cin>>n;
    int arr[105];
   for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //xx=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
         //cout<<xx<<endl;
    return 0;
}
