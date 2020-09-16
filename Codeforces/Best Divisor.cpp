#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>vc;
    ll ans=1;
    ll mx=-1;

//    for(int i=0;i<vc.size();i++)
//    {
//        cout<<vc[i]<<" ";
//    }
//    ll sum=0;
//    vector<ll>digit;
//    ll arr[n+5]= {0};
//    ll mx=0;
//    ll x=n%10;
//    for(int i=0; i<vc.size(); i++)
//    {
//        arr[i]=vc[i]%10;
//        //vc[i]=vc[i]/10+arr[i];
//        mx=max(arr[i],mx);
//        //cout<<mx<<endl;
//    }
for(int i=1; i<=n; i++)
    {

        if(n%i!=0)
            continue;
        ll sum=0;
        ll xx=i;
        while(xx>0)
        {
            sum+=xx%10;
            xx/=10;
        }
        if(sum>mx)
        {
            mx=sum;
            ans=i;
        }

    }

    cout<<ans<<endl;
//
//    if(mx==x)
//        cout<<n<<endl;
//    else
//        cout<<mx<<endl;
//
////    for(int i=0;i<digit.size();i++)
////        cout<<digit[i]<<endl;
    return 0;
}
