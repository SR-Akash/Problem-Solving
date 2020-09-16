#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,total=0;
    cin>>x;
    if(x==100||x==20||x==10||x==5||x==1)
        cout<<"1"<<endl;
        else
        {
            total=total+(x/100);
            x=x-(x/100)*100;
    //cout<<total<<endl;
            total=total+(x/20);
            x=x-(x/20)*20;
   // cout<<total<<endl;
            total=total+(x/10);
            x=x-(x/10)*10;
    //cout<<total<<endl;
            total=total+(x/5);
            x=x-(x/5)*5;
    //cout<<total<<endl;
            total=total+(x/1);
            x=x-(x/1)*1;
    //cout<<total<<endl;
    cout<<total<<endl;
        }
    return 0;

}

