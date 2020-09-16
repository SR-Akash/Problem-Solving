#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<int>vc;
    string st1,st2;
    cin>>st1>>st2;
    bool flag=true;
    ll len=st1.length();
    ll len2=st2.length();

    if(len != len2)
    {
        cout << "NO";
        return 0;
    }
    for(int i=0;i<len;i++)
    {
        if(st1[i] != st2[i])
        {
            vc.push_back(i);
        }
    }
    if(vc.size() != 2)
    {
        cout << "NO";
        return 0;
    }
    if(st1[vc[0]] == st2[vc[1]] && st1[vc[1]] == st2[vc[0]])
        cout << "YES";
    else
        cout << "NO";
    return 0;

}
