#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string st;
    cin>>st;
    int cnt=0;
    int ll=st.length();
    for(int i=0;i<=ll;i=i+k)
    {
        cout<<st[i]<<" "<<st[i+1];
        if(st[i]==st[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
