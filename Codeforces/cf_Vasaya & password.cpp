#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        string st;
        int upper=0,lower=0,digit=0;
        int flag=0;
        cin >> st;
        int l = st.length();
    for(int i=0; i<l; i++)
    {
        if(islower(st[i]))
        {
            lower++;
        }
        else if(isupper(st[i]))
        {
            upper++;
        }
        else if(isdigit(st[i]))
        {
            digit++;
        }
    }
    if(lower==0)
    {
        for(int i=0;i<l;i++)
        {
            if(isupper(st[i])&&upper>=2)
            {
                st[i]='a';
                break;
            }
            if(isdigit(st[i])&&digit>=2)
            {
                st[i]='a';
                break;
            }
        }
    }
    if(upper==0)
    {
        for(int i=0;i<l;i++)
        {
            if(islower(st[i])&&lower>=2)
            {
                st[i]='A';
                break;
            }
            if(isdigit(st[i])&&digit>=2)
            {
                st[i]='A';
                break;
            }
        }
    }
    if(digit==0)
    {
        for(int i=0;i<l;i++)
        {
            if(isupper(st[i])&&upper>=2)
            {
                st[i]='5';
                break;
            }
            if(islower(st[i])&&lower>=2)
            {
                st[i]='5';
                break;
            }
        }
    }
    cout<<st;
    cout<<endl;
}

return 0;
}

