
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int res=0;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        int count=0;
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                 count=1;
                 break;
            }

        }
        if(count==0)
            res++;

    }
    if(res%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else //if(res%2!=0)
        cout<<"IGNORE HIM!"<<endl;


    return 0;
}
