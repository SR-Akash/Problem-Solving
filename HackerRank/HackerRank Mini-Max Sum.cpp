#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    long long  p=b+c+d+e;
    long long q=a+c+d+e;
    long long r=a+b+d+e;
    long long s=a+b+c+e;
   long long t=a+b+c+d;
    long long minimum=min(p,min(q,min(r,min(s,t))));
   /* int l=max(t,s);
    cout<<l<<endl;
    int ll=max(l,r);
    cout<<ll<<endl;
    int lll=max(ll,q);
    cout<<lll<<endl;
    int llll=max(lll,p);
    cout<<llll<<endl;*/

   long long maximum=max(p,max(q,max(r,max(s,t))));
   cout<<minimum<<" "<<maximum<<endl;
    return 0;
}
