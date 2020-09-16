#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        if(n==1)
            cout<<"1"<<endl;
           for(int j=val;j<n;j++)
           {
               if(j==j+1)
               {
                   cout<<j<<" "<<j-1<<endl;
               }
            else
                cout<<val<<" "<<endl;
           }


    }


    return 0;
}

