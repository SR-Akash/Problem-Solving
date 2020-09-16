#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1==l2)
            cout<<l1<<" "<<r2<<endl;
        else if(l1!=r2)
            cout<<l1<<" "<<r2<<endl;
        else if(l1==r2)
            cout<<l1<<" "<<l2<<endl;
    }
    return 0;
}
