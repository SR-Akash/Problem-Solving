#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;
    int ll=st.length();
    int j=1;
    for(int i=0;i<ll;i+=j)
    {
        cout<<st[i];
        j++;
    }
    cout<<endl;
    return 0;
}
