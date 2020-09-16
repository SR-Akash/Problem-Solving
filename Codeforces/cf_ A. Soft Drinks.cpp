#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=k*l;
    int y=x/nl;
    int z=c*d;
    int xx=p/np;
    int ll=min(y,min(z,xx))/n;
    cout<<ll<<endl;
    return 0;
}
