#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int neg=0,pos=0;
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        if(xx<0)
            neg=(neg+xx);
        else if(xx>0)
            pos+=xx;
    }
    int sum=pos+neg;
    int ok=abs(sum);
    //cout<<ok<<endl;
    int vag=ok/k;
    //cout<<vag<<endl;
    int div=ok%k;
    //cout<<vag<<endl;
   // cout<<div<<endl;
   if(div==0)
    cout<<vag<<endl;
   else
    cout<<vag+1<<endl;
//    int ans=(div+1);
    //int res=div+ans;
    //cout<<neg<<" "<<pos<<endl;
    //cout<<ans<<endl;
    return 0;
}
