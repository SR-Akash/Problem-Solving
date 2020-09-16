#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a/1;
    int y=b/2;
    int z=c/4;
    int minimum=min(z,min(x,y));
    int res=minimum*1+minimum*2+minimum*4;
    cout<<res<<endl;
    return 0;
}
