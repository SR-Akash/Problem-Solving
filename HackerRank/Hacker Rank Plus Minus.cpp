#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    double n,cp=0,co=0,cn=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         double x;
         cin>>x;
         if(x>0)
         {
            cp++;
         }
         else if(x<0)
         {
             cn++;
         }
         else if(x==0)
         {
             co++;
         }

    }

     double Positive,Negative,Zero;
     Positive=cp/n;
     //cout<<Positive<<endl;
     Negative=cn/n;
     //cout<<Negative<<endl;
     Zero=co/n;
     //cout<<Zero<<endl;

//printf("%lf%lf%lf\n",Positive,Negative,Zero);
  //cout<<Positive<<Negative<<Zero<<"\n";
  cout<<fixed<<Positive<<setprecision(6)<<endl;
  cout<<fixed<<Negative<<setprecision(6)<<endl;
  cout<<fixed<<Zero<<setprecision(6)<<endl;

    return 0;


}
