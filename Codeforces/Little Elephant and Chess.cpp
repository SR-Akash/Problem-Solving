#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string st;

    ll cnt=0;
    for(int i=1;i<=8;i++)
    {
        cin>>st;
        if(st=="WBWBWBWB")
            cnt++;
        else if(st=="BWBWBWBW")
            cnt++;
    }
    if(cnt==8)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
