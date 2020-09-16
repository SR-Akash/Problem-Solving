#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int j=0;j<x;j++)
    {
        string st;
    cin>>st;
    int len=st.length();
    int vol=0,cons=0,other=0;

    for(int i=0;i<len;i++)
    {
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        {
          vol++;
        }
        else if(st[i]=='b'||st[i]=='c'||st[i]=='d'||st[i]=='f'||st[i]=='g'||st[i]=='h'||st[i]=='j'||st[i]=='k'||st[i]=='l'||st[i]=='m'||st[i]=='n'||st[i]=='p'||st[i]=='q'||st[i]=='r'||st[i]=='s'||st[i]=='t'||st[i]=='v'||st[i]=='w'||st[i]=='x'||st[i]=='y'||st[i]=='z')
        {
             cons++;
        }
        else
        {
            other++;
        }
    }
        if(vol==cons||vol==other)
            cout<<vol<<endl;
        else if(vol==cons&&other<vol&&other<cons)
                cout<<other<<endl;
        else if(cons==other)
            cout<<cons<<endl;
        else if(other<vol||other<cons)
            cout<<other<<endl;
        else if(vol<cons||vol<other)
        {
           cout<<vol<<endl;
        }
        else if(cons<vol||cons<other)
        {
            cout<<cons<<endl;
        }
        else if(other<vol||other<cons)
        {
            cout<<other<<endl;
        }


    }

}
