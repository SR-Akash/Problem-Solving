#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="CODE";
    string ss="FORCES";
    string str;
    cin>>str;
    int flag=0;
    int flagg=0;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='s')
            flag=1;
        if(str[i]=='ss')
            flagg=1;
    }
    if(flag==1&&flagg==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
