#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int sum=0,count=0,countt=0,res;
    for(int i=0;i<n;i++)
    {
        int xx;

        cin>>xx;
        count++;
        sum+=xx;

    }
        int multi=(count-1)*10;
        int mc=multi+sum;

       // int ans=sum+multi;
        //cout<<ans<<endl;
        res=d-sum;
         int fivediv=res/5;
         //cout<<fivediv;
       //int total=res+sum+multi;
       //cout<<total;
       if(mc>d)
             cout<<"-1"<<endl;
       else
        cout<<fivediv<<endl;

    return 0;
}
