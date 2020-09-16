#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x)
{
    int start=0,end=n-1;

    while(start<=end)
    {
        int mid=(start+end)/2;
        if(x==arr[mid])
            return mid;
        else if(arr[mid]<=arr[end])
        {
            if(x>arr[mid]&&x<=arr[end])
                start=mid+1;
            else
                end=mid-1;
        }
        else
        {
            if(x>=arr[start]&&x<arr[mid])
                end=mid-1;
            else
                start=mid+1;
        }

    }
    return -1;
}
int main(void)
{
    int xx;
    cin>>xx;
    int arr[10005];
    int target=5;

    for(int i=0;i<xx;i++)
    {
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=search(arr,n,target);
    if(index>0)
        cout<<index<<endl;
    else
        cout<<"Element Doesn't found"<<endl;
    return 0;
}
