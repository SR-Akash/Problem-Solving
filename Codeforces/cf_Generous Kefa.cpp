#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string st;
    int count=1;
    cin>>n>>k;
    cin>>st;
    sort(st.begin(),st.end());
    for(int i=1;i<n;i++)
     {
        if(st[i]!=st[i-1])
        count=1;
        else
        {
            count++;
            if(count>k)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
