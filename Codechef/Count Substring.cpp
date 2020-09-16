#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    string st;
    ll cnt=0;
    ll n;
    while(t--)
    {
       cin>>n;
       cin>>st;
       ll len=st.length();
       cnt=0;
       for(int j=0;j<n;j++)
       {
         if(st[0]=='1'&&st[n-1]=='1')
           {
               if(st[j]=='1')
                cnt++;
           }
       }
       ll ans=(cnt*(cnt+1))/2;
       cout<<ans<<endl;
    }

    return 0;
}
