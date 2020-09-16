#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
using namespace std;
int main()
{

    int n;
    int even=0,odd=0;
    int res=0;
    cin>>n;
    int arr[1001];

    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       if(arr[i]%2==0)
          even++;
    }

    if(even==1)
    {
       for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }


  else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==1)
            {
                cout<<i+1;
                return 0;
            }
        }
    }


    return 0;
}
