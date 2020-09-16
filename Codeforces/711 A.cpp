#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
 ll n;
 string s,s1;
 cin>>n;
 for(int i=n;i>0;i--)
 {
     cin>>s;
     s1+=s;
 }
     int pos=s1.find("OO");
     if(pos>=0)
     {
         s1.replace(pos,2,"++");
         cout<<"YES"<<endl;
         cout<<s1<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }

return 0;
}
