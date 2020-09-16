#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll n;cin>>n;
    vector<ll> getPrimes(ll n);
    vector<ll>primes;

        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
                primes.push_back(i);
        }

            if(primes.size()==1)
            cout<<"Prime"<<endl;
        else
            cout<<"NOT"<<endl;
        //cout<<primes[i]<<endl;

}
