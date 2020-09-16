#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,count=0,x=0,i;
    cin>>n>>k;
    for(i=1;i<n;i++)
    {
        x=i/k;
        x++;
    }
    if(x%2!=0)
        cout<<"NO"<<endl;
    else if(n%2!=0&&k%2!=0&&n%k==0)
        cout<<"YES"<<endl;
    else if(n%2!=0&&k==1)
        cout<<"YES"<<endl;
    else
        cout<<"YES"<<endl;


    return 0;
}
