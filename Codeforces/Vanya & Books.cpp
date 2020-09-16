#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int>vc;
    int st[100];
    ll n,cnt=0,j=0,siz,sum=0;
    cin>>n;
    if(n<10)
        cout<<n<<endl;
    else
    {
        for(int i=9;n>0;i*=10)
        {
            sum+=n;
            n-=i;
        }
       cout<<sum<<endl;
    }

    return 0;
}
