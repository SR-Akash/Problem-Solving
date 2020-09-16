#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;

    float xx=sqrt(n);
    int ans=xx;
    for(int i=ans;i>=1;i--)
    {
        int yy=n/i;
        float zz=n/i;
        if(yy==zz)
        {
            cout<<i<<" "<<n/i<<endl;
            break;
        }
    }

    return 0;
}
