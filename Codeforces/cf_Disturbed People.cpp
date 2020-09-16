#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1&&arr[i-1]==0&&arr[i-2]==1)
        {
            count++;
            i=i+2;
        }

    }
    cout<<count<<endl;
    return 0;
}
