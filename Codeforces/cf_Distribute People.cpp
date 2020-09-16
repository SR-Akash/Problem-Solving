#include<bits/stdc++.h>
#define ll long long
#define sc scanf
#define pf printf

using namespace std;

int main()
{
    int n; cin>>n;int cnt = 0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<n;i++)
    {
            if(arr[i-1] == 1 && arr[i+1] == 1 && arr[i] == 0||arr[i-1] == 0 && arr[i+1] == 0 && arr[i] == 1)
            {
                cnt++;
            }
    }
    cout<<ceil(cnt/2.0)<<endl;

    return 0;
}
