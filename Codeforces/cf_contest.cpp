#include<bits/stdc++.h>
using namespace std;
int main()
{
    int acost,bcost,cmin,dmin,mis,vas;
    cin>>acost>>bcost>>cmin>>dmin;
    if(acost%250==0&&bcost%250==0)
    {
         mis=max((3*acost)/10,acost-(acost/250)*cmin);
         vas=max((3*bcost)/10,bcost-(bcost/250)*dmin);
        int xx=max(mis,vas);
        if(xx>mis)
            cout<<"Vasya"<<endl;
        else if(xx>vas)
            cout<<"Misha"<<endl;
        //cout<<xx<<endl;
      if(mis==vas)
            cout<<"Tie"<<endl;
    }

    return 0;
}
