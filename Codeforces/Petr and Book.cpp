#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;

    vector<pair<ll,ll> >vc;

    for(int i=0;i<7;i++)
    {
        ll x;
        cin>>x;
        vc.push_back(make_pair(x,i));
    }

    ll sum=0;
    for(int i=0;i<vc.size();i++)
    {
        sum+=vc[i].first;
        //cout<<sum<<endl;
        if(sum>=n)
        {
               cout<<vc[i].second<<endl;
        }
        else if(sum<n)
        {
           for(int j=0;j<vc.size();j++)
            {
                sum+=vc[j].first;
                if(sum>=n)
                {
                    cout<<vc[j].second<<endl;
                    break;
                }

            }
        }

    }

    return 0;
}
