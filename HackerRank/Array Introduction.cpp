#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>vec;
    cin>>n;
    int a;
    int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            reverse(arr,i);
            cout<<sizeof(arr[i])<<endl;
        }


    return 0;
}
