#include<bits/stdc++.h>
#define ull unsigned long
#define ll long long
#define pb push_back

using namespace std;

int main()
{
    ll xx;
    cin >> xx;
    while(xx--)
    {
        ll a,b,c,f, mm=100000000,j=0;
        cin >> a>> b >>c;
        vector<ll>vc;
        set<ll>sss;
        for(ll i=0; i<a; i++)
        {
            ll xx;
            cin >> xx;
            vc.push_back(xx);
        }
        for(ll i=0; i<vc.size(); i++)
        {
            ll cnt = 0;
            for(ll j=i; j<vc.size(); j++)
            {
                cnt++;
                ll xx = vc[j];
                sss.insert(xx);
                if(cnt==c)
                    break;
            }
            if(cnt!=c)
            {
                break;
            }
            ll k = sss.size();
            mm = min(k,mm);
            sss.clear();
        }
        cout << mm << endl;


    }



}
