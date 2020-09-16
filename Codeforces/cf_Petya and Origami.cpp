#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    double k;
    cin>>n>>k;
    long long  rd=n*2;
    long long grn=n*5;
    long long blue=n*8;
    long long divrd=ceil(rd/k);
    long long divgrn=ceil(grn/k);
    long long divblue=ceil(blue/k);
    cout<<divrd+divgrn+divblue<<endl;
    return 0;
}
