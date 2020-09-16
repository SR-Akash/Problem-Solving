#include<bits/stdc++.h>
using namespace std;
int arr[10000001];
int main()
{

    int n;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(n%2!=0)
            {
               cout<<arr[(n-1)/2]<<endl;
               return 0;

            }

            else
            {
                cout<<arr[((n-1)/2)]<<endl;
                return 0;

            }

        }

    return 0;
}
