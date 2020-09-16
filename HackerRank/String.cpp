#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i;
    int len=str.length();
    for( i=0;i<len;i++)
    {
        if(str[i]=',')
            break;
    }
    cout<<str[i]<<endl;
    //cout<<str[i]<<endl;
    return 0;
}
