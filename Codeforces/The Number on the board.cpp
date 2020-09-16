#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll k,n;
    cin>>k>>n;
    ll ok=n;
    ll sum=0;
   while(ok!=0)
    {
        sum=sum+ok%10;
        ok=ok/10;
    }
    if(sum>k)
        cout<<0<<endl;
    else
        cout<<(n+1)-n<<endl;

    return 0;
}
