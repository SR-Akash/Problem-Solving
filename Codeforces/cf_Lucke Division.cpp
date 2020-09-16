#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    long long len=n.length();
    long long count=0;
    for(long long i=0;i<len;i++)
    {
        if(n[i]=='4'||n[i]=='7')
        {
             if(n%i==0)
                cout<<"YES"<<endl;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
