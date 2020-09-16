#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        int count=0;
        string str;
        cin>>str;
        int len=str.length();
        for(int i=0;i<len;i++)
        {
            if(str[i]=='8')
                count++;
        }
     int div=n/11;
     int res=min(div,count);
        cout<<res<<endl;



    return 0;
}
