#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n;
    cin>>n;
    bool isPrime=true;
    for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            isPrime= false;
        }
    if(isPrime)
        cout<<"YES"<<endl;
    else
        cout<<"No"<<endl;

}
