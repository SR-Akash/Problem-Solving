#include<bits/stdc++.h>
#define ll long long
#define pi acos(0);

using namespace std;
int main()
{
    vector<char>even;
    vector<char>odd;

    ll n;
    cin>>n;
    string st;
    cin>>st;
    if(n<=2)
    {
        cout<<st<<endl;
        return 0;
    }
    if(n%2==1)
    {
        for(int i=0; i<n; i+=2)
            odd.push_back(st[i]);

        for(int i=1; i<n; i+=2)
            even.push_back(st[i]);
    }
    reverse(even.begin(),even.end());


    for(int i=0; i<even.size(); i++)
        cout<<even[i];
    for(int i=0; i<odd.size(); i++)
        cout<<odd[i];

    vector<char>od;
    vector<char>evn;
    if(n%2==0)
    {
        for(int i=0; i<n; i+=2)
            od.push_back(st[i]);
        for(int i=1; i<n; i+=2)
            evn.push_back(st[i]);
    }
    reverse(od.begin(),od.end());
    for(int i=0; i<od.size(); i++)
        cout<<od[i];
    for(int i=0; i<evn.size(); i++)
        cout<<evn[i];

}
