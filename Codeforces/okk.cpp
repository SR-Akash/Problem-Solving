#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=a+b;
    int y=c+d;
    int z=a+c;
    int p=b+d;
    int q=a+d;
    int r=b+c;
    int e=a+b+c;
    int f=b+c+d;
    int g=c+d+a;
    int h=d+a+b;

    if(x==y||z==p||q==r||e==d||f==a||g==b||h==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
