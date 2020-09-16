#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
    int xx=ceil(n/(2.0*m));
    //cout<<xx<<endl;
    int yy=n/m;
    if(xx>yy)
    {
          cout<<"-1"<<endl;
    }

    else
        cout<<xx*m<<endl;
    }

    return 0;
}
