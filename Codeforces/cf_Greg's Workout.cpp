
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s1=0,s2=0,s3=0;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        for(int i=1;i<t;i+=2)
            s1+=i;
        for(int i=2;i<t;i+=3)
            s2+=i;
        for(int i=3;i<t;i+=3)
            s3+=i;
    }
    cout<<s1<<" "<<s2<<" "<<s3<<endl;
    return 0;
}
