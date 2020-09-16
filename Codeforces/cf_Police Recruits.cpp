#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sm=0,smm=0;
    while(n--)
    {
        int xx;
        cin>>xx;
        if(xx>0)
            sm=sm+xx;
        else if(xx<=0&&sm<=0)
            smm=smm+xx;
        else
            sm=sm+xx;
    }
     cout<<abs(smm)<<endl;
     return 0;
}
