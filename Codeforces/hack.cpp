#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,k,m,p,j;
    i=9;
    while(n%i!=0&&i>1)i--;
    if(i!=1)
    {
        cout<<n/i<<endl;
        for(j=1;j<=n/i;j++) cout<<i<<' ';
        cout<<endl;
    }
    else
    {
        cout<<n<<endl;
        for(j=1;j<=n;j++) cout<<1<<' ';
    }
    return 0;
}
