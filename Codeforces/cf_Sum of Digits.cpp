#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vc;
    int n;
    cin>>n;
    int r=0,sum=0;
    int j=0;
    while(sum!=1)
    {
         for(int i=0;i<=n;i++)
    {
        r=n%10;
        sum+=r;
        n/=10;

    }

    j++;
    }
cout<<sum<<endl;
    return 0;
}
