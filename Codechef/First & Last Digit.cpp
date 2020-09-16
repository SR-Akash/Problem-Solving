#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //int sum=0;
    while(t--)
    {
        int num=0;
        long int n;
        cin>>n;
        num=n%10;
        while(n)
        {
           if(n<10)
            num+=n;
            n=n/10;
        }
        cout<<num<<endl;
    }
    return 0;
}
