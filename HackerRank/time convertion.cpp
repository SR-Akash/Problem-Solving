#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str,res,ans;
  cin>>str;
  int len=str.length();
  for(int i=0;i<len;i++)
  {
      if(str[8]=='P')
      {
           res=str[1];
           ans=res+str[12];
          cout<<ans<<endl;
          cout<<str[1]+12<<endl;
          return 0;
      }

  }
    return 0;
}


