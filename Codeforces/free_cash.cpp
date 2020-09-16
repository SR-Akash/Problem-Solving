#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;

    int x,y;
    int flag=0;
    bool ok=false;
    int cnt=1;
    int mx=1;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        //cout<<x<<" "<<y<<endl;
    }
    for(int i=0;i<n;i++)
    {
         if(v[i].first==v[i+1].first&&v[i].second==v[i+1].second)
        {
            cnt++;
            if(cnt>mx)
                mx=cnt;

        }
        else
            cnt=1;
    }
cout<<mx<<" ";

cout<<endl;


    return 0;
}

