#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long K,P,N,result;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>K>>P>>N;
        result=(K-P)*N;
        if(result<=0)
            cout<<"0"<<endl;
        else
            cout<<result<<endl;
    }

    return 0;
}
