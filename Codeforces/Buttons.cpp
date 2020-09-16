#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i*(n-i);
    }
    cout<<sum+n<<endl;
    return 0;
}
