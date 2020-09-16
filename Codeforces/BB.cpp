#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int big,m=-1;
    int ar[100005],arr[100005];
    vector<int>vc;
    cin>>n;
    int l=0;
    for(int i = 0; i < n; ++i)
    {
       int x;
       cin>>x;
       big=max(m,x);
       ar[x]=5;
       cout<<arr[x]<<endl;
    }

    return 0;

}
