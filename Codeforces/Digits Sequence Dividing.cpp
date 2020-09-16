#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        string st;
        cin>>x>>st;
        int ll=st.length();

            if(ll==2&&st[0]>=st[1])
            {
               cout<<"NO"<<endl;

            }

            else
            {
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<st[0]<<" ";
                for(int i=1;i<ll;i++)
                {
                    cout<<st[i];

                }
                 cout<<endl;
            }


    }
    return 0;
}
