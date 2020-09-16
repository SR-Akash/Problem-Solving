#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
using namespace std;
int main()
{
    std::vector<int>vec;
    set<int>s;
    set<int>::iterator it;
    int n;
    cin>>n;
   // int x=n;
    int arr[1001];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
            arr[i]=0;
       }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            count++;
    }
    cout<<count<<endl;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            cout<<arr[i]<<" ";
    }

    return 0;
}
