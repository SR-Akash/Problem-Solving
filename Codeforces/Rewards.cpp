#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,n;
    cin>>a>>b>>c>>x>>y>>z>>n;
    int suma=a+b+c;
    int sumx=x+y+z;
    double div1=(suma/5.0);
    double div2=(sumx/10.0);
    double ans=ceil(div1)+ceil(div2);
    if(ans<=n)
    {
        cout<<"YES"<<endl;
    }

    else
        cout<<"NO"<<endl;
        return 0;
}
