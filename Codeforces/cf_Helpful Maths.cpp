#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>vc;
    string st;
    cin>>st;
    int flag=0;
    int arr[1005];
    int j=0,i;
    int ll=st.length();
    for( i=0;i<ll;i++)
    {
        vc.push_back(st[i]);
    }
    sort(vc.begin(),vc.end());
    for(i=0;i<ll-1;i++)
    {
       if(vc[i]=='+')
        flag=0;
    else
        cout<<vc[i]<<"+";
    }
    cout<<vc[i]<<endl;


    return 0;
}
