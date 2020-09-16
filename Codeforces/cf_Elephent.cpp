#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,total=0;
    cin>>x;
    if(x==1||x==2||x==3||x==4||x==5)
        cout<<"1"<<endl;
        else
        {
            total=total+(x/5);
            x=x-(x/5)*5;
    //cout<<total<<endl;
            total=total+(x/4);
            x=x-(x/4)*4;
   // cout<<total<<endl;
            total=total+(x/3);
            x=x-(x/3)*3;
    //cout<<total<<endl;
            total=total+(x/2);
            x=x-(x/2)*2;
    //cout<<total<<endl;
            total=total+(x/1);
            x=x-(x/1)*1;
    //cout<<total<<endl;
    cout<<total<<endl;
        }
    return 0;

}
