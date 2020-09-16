#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,arr[101];
    int count =0;
    cin>>n>>k;
    //int i=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
        {
            if(arr[i]>=arr[k]&&arr[i]>0)
            {
                count++;
            }
        }

        cout<<count<<endl;
        return 0;
}
