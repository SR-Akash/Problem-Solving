#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,left,right;
    cin>>st;
    int ll=st.length();

    for(int i=0;i<ll;i+=1)
    {
        left[i]=st[i];
        cout<<left[i];
    }
    for(int i=0;i<ll;i+=2)
    {
        right[i]=st[i];
        cout<<right[i]<<endl;
    }

    return 0;
}
