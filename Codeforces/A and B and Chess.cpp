#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char ch;
    ll s=0,ss=0;
    for(ll i=0;i<8;i++)
    {
        for(ll j=0;j<8;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='Q')
                s+=9;
            else if(ch=='R')
                s+=5;
            else if(ch=='B')
                s+=3;
            else if(ch=='N')
                s+=3;
            else if(ch=='P')
                s+=1;
            if(ch=='q')
                ss+=9;
            else if(ch=='r')
                ss+=5;
            else if(ch=='b')
                ss+=3;
            else if(ch=='n')
                ss+=3;
            else if(ch=='p')
                ss+=1;
        }
    }
    if(s>ss)
        cout<<"White"<<endl;
    else if(s<ss)
        cout<<"Black"<<endl;
    else if(s==ss)
        cout<<"Draw"<<endl;
    return 0;
}
