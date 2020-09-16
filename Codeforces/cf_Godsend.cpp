#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main()
{
    int n;
    long long odd=0,even=0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
            odd++;
            else if(arr[i]%2==0)
                even++;
    }
    if(even==n)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;
    return 0;
}
