#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set<int,int>a;
    int arr[101],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[a]=i+1;
    }
    for(int j=0;j<n;j++)
    {
         cout<<arr[j+1]<<" ";
    }

    cout<<endl;
    return 0;
}
