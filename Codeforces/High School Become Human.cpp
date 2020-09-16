#include<bits/stdc++.h>
#define ld long double
using namespace std;
int main()
{
    ld x,y;
    cin>> x >> y ;
    ld a=1.0*y*log2(1.0*x) ;
    ld b=1.0*x*log2(1.0*y) ;
    if(a>b)
        cout<<">"<<endl;
    else if(b>a)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;

    return 0;
}
