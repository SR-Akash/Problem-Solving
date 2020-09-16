#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>vc;
    set<ll>st;
    set<ll>::iterator it;
    ll n;
    cin>>n;
    ll arr[n+5];
    ll xx;
    for(int i=0;i<n;i++)
    {
        cin>>xx;
        st.insert(xx);

    }
    for(it=st.begin();it!=st.end();it++)
        vc.push_back(*it);

    for(int i=0;i<vc.size();i++)
        {

            if(vc.size()!=1&&vc[i]!=vc[i+1])
            {
                cout<<vc[1]<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;



    return 0;
}
