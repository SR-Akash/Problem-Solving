#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10],xx,yy;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    //sort(arr,arr+6);
    for(int i=1;i<=1000;i++)
    {
        random_shuffle(arr,arr+6);
        if(arr[0] + arr[1] + arr[2] == arr[3] + arr[4]+arr[5])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

