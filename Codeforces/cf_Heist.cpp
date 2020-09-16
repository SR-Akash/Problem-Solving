#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long mini=1e9,maxi,m=0,res;
    cin>>n;
    int i=0;
    while(i<n)
    {
         long long x;
        cin>>x;
        mini=min(x,mini);
        m=max(x,m);
        i++;
    }

    //cout<<mini<<endl;
    res=m-mini+1-n;
    cout<<res<<endl;
    return 0;
}
