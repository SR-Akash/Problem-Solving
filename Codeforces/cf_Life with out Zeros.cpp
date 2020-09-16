#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    string a,b,res;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='0')
            a.erase();
    }


    cout<<a<<endl;
    return 0;
}
