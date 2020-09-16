#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    int sum=0;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        sum+=xx;
    }
    int aa=a*1;
    int bb=b*2;
    int add=aa+bb;
    int ans=sum-add;
    if(ans<0)
        cout<<"0"<<endl;
    else
    cout<<ans<<endl;

    return 0;
}
