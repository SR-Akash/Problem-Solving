#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int in=0,out=0,res=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        out=out-a;
        out=out+b;
        //cout<<out<<endl;
        out=min(in,out);
        //cout<<res<<endl;
        //cout<<out<<endl;
    }
   cout<<abs(out)<<endl;

    return 0;

}
