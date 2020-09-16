#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a= 0,b;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        a += arr[i];
    }
    sort(arr, arr+n);
    int maxi = arr[n-1];

    while(b<=a)
    {
        b = 0;
        for(int j=0; j<n; j++)
        {
            b=b + (maxi - arr[j]);


        }
        if(b>a)
            {
            cout<<maxi<<endl;
            break;
        }
        else
        {
             maxi++;}
            }

    return 0;


}
