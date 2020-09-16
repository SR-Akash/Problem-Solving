#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int count=0;
    int ll=st.length();
    for(int i=0;i<ll;i++)
    {
        for(int j=i;j<ll;j++)
        {
            for(int k=j;k<ll;k++)
            {
                if(st[i]=='Q'&&st[j]=='A'&&st[k]=='Q')
                    count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
