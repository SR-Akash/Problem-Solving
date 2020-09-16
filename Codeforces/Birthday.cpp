#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,l;
    cin>>n>>m>>k>>l;

    long long xx=n/m;
    long long add=l+k;
    if(add%m!=0)
         xx++;

    if(xx*m>n)
        cout<<"-1"<<endl;

    else
        cout<<xx<<endl;
    return 0;
}
