#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string st;
    cin>>n>>t;
    cin>>st;
    int ll=st.length();
        for(int i=0;i<ll-1;i++)
        {
               if(st[i]=='B'&&st[i+1]=='G')
            {
                swap(st[i+1],st[i]);
                i++;
            }
        }

        for(int i=0;i<t;i++)
        {

               if(st[i]=='B'&&st[i+1]=='G')
            {
                swap(st[i+1],st[i]);
                i++;
            }

        }
     cout<<st<<endl;
     return 0;

}
