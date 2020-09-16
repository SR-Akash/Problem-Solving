#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i;
    cin>>str;
    int length=str.length();
    //cout<<length<<endl;
    for(i=0;i<length;i++)
    {
       if(str[i]=='Danil'||str[i]=='Olya'||str[i]=='Slava'||str[i]=='Ann'||str[i]=='Nikita')
       {
        cout<<"YES"<<endl;
        return 0;
       }

    }

   cout<<"NO"<<endl;
    return 0;
}
