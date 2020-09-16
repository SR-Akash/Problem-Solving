#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    int n,p,x;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        //int x;
        cin>>x;
        st.insert(x);
    }
    int y;
    cin>>y;
    for(int i=0;i<y;i++)
    {
        cin>>x;
        st.insert(x);
    }
    //cout<<x<<endl;
    int sze=st.size();
    if(sze==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
