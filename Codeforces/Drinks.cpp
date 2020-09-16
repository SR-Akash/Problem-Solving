#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        sum+=num;

    }
    double res=sum/double(n);
    printf("%.12lf",res);
    return 0;
}
