#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,count=1,cnt=1;
    int neg=0,pos=0,res;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>t;
    }
        if(k%2==0)
        {
           for(int i=1;i<=n;i+=k)
           {
              count=0;
           //cout<<count<<endl;
           }

        }
        else if(k%2!=0)
        {
            for(int i=0;i<n;i+=k)
            {
               cnt=0;
               //cout<<cnt<<endl;
            }

        }
  while(count)
  {
      pos++;
      cnt++;
      int an=abs(pos+cnt);
      cout<<an<<endl;
  }
     while(cnt)
  {
      pos++;
      cnt++;
      int ann=abs(pos+cnt);
      cout<<ann<<endl;
  }

    return 0;
}
