#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0,ss=0,sc=0,sd=0;
    int ans=0;
    int sa[n+5];
    int sb[n+5];
    int cnt=1;
    int sum=-1;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        sa[i]=a+b+c+d;
        //sb[i]=i;
    }


    for(int i=0;i<n;i++)
    {
        if(sa[i]>sa[0])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
