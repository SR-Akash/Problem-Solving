#include<bits/stdc++.h>
using namespace std;
int main()
{

    int c=0;
    int n,k;
    cin>>n>>k;
    while(n!=0)
    {
    int lk=max(1,n-k);
    //cout<<lk<<endl;
    int ka=n-lk;
    //cout<<ka<<endl;
    if(ka==k)
    {
        cout<<"Ayoub"<<endl;
        break;
    }
    k=ka;

    int la=max(1,n-k);


    //cout<<la<<ends;

  //  cout<<n<<endl;
    int  an=n-la;
//    cout<<an<<endl;
    c++;
    if(an==n)
    {
        cout<<"killani"<<endl;
        break;
    }

    n=an;

    }
   //cout<<c<<endl;



}
