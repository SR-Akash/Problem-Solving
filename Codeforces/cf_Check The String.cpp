#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int a=0,b=0,c=0;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(i!=(len-1))
        {
            if(str[i]>str[i+1])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }

       if(str[i]=='a')
            a++;
        else if(str[i]=='b')
            b++;
        else if(str[i]='c')
            c++;

    }
      if((c==a||c==b)&&a>=1&&b>=1)
            cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;



    return 0;
}
