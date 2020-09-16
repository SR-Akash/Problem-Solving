#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch1='CODE';
    char ch2='FORCES';
    string str="CODEFORCES";
    string s="CODE";
    string st;
    cin>>st;
    int len=st.length();
    bool xx=false,yy=false;
    int count=0,j=0,k=0;
    for(int i=0;i<len;i++)
    {
           if(st[i]==str[i])
           {

               count++;

           }
    }
if(count==10)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

    return 0;
}
