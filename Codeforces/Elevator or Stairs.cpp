#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,z,t1,t2,t3,str,ele,res;
    cin>>x>>y>>z>>t1>>t2>>t3;
    str=abs(x-y)*t1;
    ele=abs(x-z)*t2;
    res=abs(abs(x-y)*t2+(t3*2)+ele+t3);

        if(str>=res)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;;

    return 0;
}
