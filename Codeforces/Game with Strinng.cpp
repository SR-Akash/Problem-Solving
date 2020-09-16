#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int cnt=0;
    int ll=st.length();
    for(int i=0;i<ll;i=i+2)
    {
        if(st[i]==st[i+1])
            cnt++;
    }
    if(cnt%2==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
