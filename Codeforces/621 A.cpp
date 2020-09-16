#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];

    for(int o=0;o<n;o++)
        cin>>arr[o];


    sort(arr,arr+n);

    reverse(arr,arr+n);

    ll odd=0,even=0;

    vector<ll>vc,vcc;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            vcc.push_back(arr[i]);
            even++;
        }

        else
        {
            vc.push_back(arr[i]);
            odd++;
        }

    }
    ll sum=0;
    ll sm=0,sm1=0;
    if(odd%2==0)
    {
        for(int i=0;i<n;i++)
            sum+=arr[i];
        cout<<sum<<endl;
    }
    else if(odd%2==1)
    {
        for(int i=0;i<vc.size()-1;i++)
            sm+=vc[i];
        for(int j=0;j<vcc.size();j++)
            sm1+=vcc[j];
        cout<<sm+sm1<<endl;
    }
    return 0;
}

