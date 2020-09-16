#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    vector<int>vec;
    int sum=0;
    int arr[1001];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    for(int i=0;i<n;i++)
    {
        sum=sum+abs(arr[i]);
    }
    cout<<sum<<endl;
    return 0;

}
