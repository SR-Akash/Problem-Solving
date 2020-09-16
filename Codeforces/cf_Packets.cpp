#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n,res;
    ll count=0;
    cin>>n;
     while(n>0)
     {
             n=n/2;
             count++;
     }
    cout<<count<<endl;
    return 0;
}
