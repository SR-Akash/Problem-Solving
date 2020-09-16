#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    int count=0,cnt=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        if(xx>h)
            count++;
            else
                cnt++;
    }
    int xx=count*2+cnt*1;
    cout<<xx<<endl;
    return 0;
}
