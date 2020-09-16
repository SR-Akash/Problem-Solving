#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int arr[100005];
        cin>>arr[i];
        if(arr[i]!=arr[i-1])
            count++;
        else
            continue;
    }
        cout<<count<<endl;
    return 0;
}
