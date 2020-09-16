#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int mini=min(a,min(b,c));
    //cout<<mini<<endl;
    if(mini==a||mini==b||n==1)
    {
        //cout<<"Here";
        int xx=min(a,b);
        int res=xx*(n-1);
        cout<<res<<endl;
    }
    else
    {
        int yy=min(a,b);
        //cout<<yy<<endl;
        int ans=yy+c*(n-2);
        cout<<ans<<endl;
    }
    return 0;
}
