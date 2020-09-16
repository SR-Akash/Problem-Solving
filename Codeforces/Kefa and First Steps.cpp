#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,flag=1,max=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
        cout<<"1"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=arr[i+1])
            {
                flag++;
            }
            else
                flag=1;
            if(flag>max)
                max=flag;

        }
    }
    cout<<max<<endl;
    return 0;

}
