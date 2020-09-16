#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        long long k,x;
        cin>>k>>x;
        long long res=(k-1)*9+x;
        cout<<res<<endl;
    }

    return 0;
}
