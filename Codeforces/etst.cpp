
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
}

int main()
{

    ll b,k,n,ok;
    cin>>b>>k;
    ll sum=0,j;
    ll arr[k+5];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
        n = sizeof(arr) / sizeof(arr[0]);

    }

    cout<<sum<<" ";
    return 0;
}
