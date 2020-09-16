#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{

    ll arr[100000];
    memset(arr,1LL,sizeof arr);
    vector<ll>vc;
    for(int i=2; i<100000; i++)
    {
        if(arr[i])
        {
            for(int j=i+i; j<100000; j+=i)
                arr[j]=0;
            vc.push_back(i);
        }
    }

    ll t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        ull cnt=0;
        ull ml=1;
        for(int i=0; i<vc.size(); i++)
        {
            ml*=vc[i];
            if(ml<=n)
                cnt++;
            else
                break;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
