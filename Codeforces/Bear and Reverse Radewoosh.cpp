#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n+5];
    int time[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>time[i];
    int cnt=0;
    int sum=0,sum2=0;
    for(ll i=0;i<n;i++)
    {
        cnt+=time[i];
        sum+=max(0,arr[i]-cnt*c);
    }
    reverse(arr,arr+n);
    reverse(time,time+n);
    cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=time[i];
        sum2+=max(0,arr[i]-cnt*c);
    }

    if(sum>sum2)
    cout<<"Limak"<<endl;
    else if(sum<sum2)
        cout<<"Radewoosh"<<endl;
    else
        cout<<"Tie"<<endl;

    return 0;
}
