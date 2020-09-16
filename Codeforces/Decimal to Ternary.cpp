#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll num;
    while(cin>>num)
    {
        ll rem,base=1,ternary=0;
        if(num==-1)
            break;
        while(num!=0)
        {
            rem=num%3;
            ternary=ternary+rem*base;
            num/=3;
            base=base*10;
        }
        cout<<ternary<<endl;
    }

    return 0;
}
