#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lenth=s.length();
    int i=0;
    while(i<lenth)
    {
      if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
        i++;
    }

cout<<"NO"<<endl;
    return 0;
}
