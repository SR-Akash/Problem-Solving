#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    string arr[1005];
    cin>>st;
    int ll=st.length();
    for(int i=0;i<(ll/8);i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(st.substr(i*10,10)==arr[j])
            {
                cout<<j;
            }

        }
    }
    cout<<endl;
    return 0;
}

