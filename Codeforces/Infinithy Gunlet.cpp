#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    string st;
    ll f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>st;
        if(st=="purple")
            f1=1;
        else if(st=="green")
            f2=1;
        else if(st=="blue")
            f3=1;
        else if(st=="orange")
            f4=1;
        else if(st=="red")
            f5=1;
        else if(st=="yellow")
            f6=1;
    }

    cout<<6-n<<endl;
    if(f1==0)
        cout<<"Power"<<endl;
    if(f2==0)
        cout<<"Time"<<endl;
    if(f3==0)
        cout<<"Space"<<endl;
    if(f4==0)
        cout<<"Soul"<<endl;
    if(f5==0)
        cout<<"Reality"<<endl;
    if(f6==0)
        cout<<"Mind"<<endl;

    return 0;

}
