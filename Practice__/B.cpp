#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<int>vv;
    ll n;
    cin>>n;
    ll siz,dif;
    ll first=0,last=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vv.push_back(num);
    }
    sort(vv.begin(),vv.end());
    for(int i=0;i<n;i++)
    {
        siz=vv.size();
        dif=vv[siz-1]-vv[0];
        if(vv[0]==vv[i])
            first++;
        if(vv[siz-1]==vv[i])
            last++;
    }

    if(vv[siz-1]==vv[0])
    {
        cout<<dif<<" "<<(n-1)*n<<endl;
    }
    else
        cout<<dif<<" "<<first*last<<endl;
    return 0;
}

