#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc;
    ll t;
    cin>>t;
    ll n;
    while(t--)
    {
        cin>>n;
        ll nw=n;
        if(n<=9)
            cout<<n<<endl;
        else
        {
            ll rem;
            ll reverse=0;
            while(n!=0)
            {
                rem=n%10;
                reverse=reverse*10+rem;
                n/=10;
            }
            vc.push_back(nw);
            vc.push_back(reverse);
            for(int i=0;i<vc.size();i++)
                cout<<vc[i];
        }
    }
    return 0;
}

