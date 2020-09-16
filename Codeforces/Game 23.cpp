#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll m2=0,n2=0,m3=0,n3=0,resm=0,resn=0;
   for(int i=2;i<=3;i++)
   {
       while(m%i==0)
       {
           if(i==2)
            m2++;
           else m3++;
           resm++;
           m/=i;

       //cout<<"m "<<m<<endl;
       }
   }

   for(int i=2;i<=3;i++)
   {
       while(n%i==0)
       {
           if(i==2) n2++;
           else n3++;
           resn++;
           n/=i;
           //cout<<"n "<<n<<endl;
       }
   }
   //cout<<n<<" "<<m<<endl;
   if(n!=m||n2>m2||n3>n2)
   cout<<-1<<endl;
   else{
    cout<<abs(resn-resm)<<endl;
   }

   End;
}
