#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int totalday=1867+n;
   int lpy=0;
   for(int i=1867;i<=totalday;i++)
   {
       if(((i%4==0)&&(i%100!=0))||(i%400==0))
       lpy++;
   }
   totalday=(n*365);
   int day=totalday+lpy;
   {
    if(day%7==0)
    cout<<"Sunday"<<endl;
    if(day%7==1)
    cout<<"Monday"<<endl;
    if(day%7==2)
    cout<<"Tuesday"<<endl;
    if(day%7==3)
    cout<<"Wednesday"<<endl;
    if(day%7==4)
    cout<<"Thursday"<<endl;
    if(day%7==5)
    cout<<"Friday"<<endl;
    if(day%7==6)
    cout<<"Saturday"<<endl;
   }
   return 0;
}
