#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<string>vc,ok;
    ll n;
    cin>>n;
    if(n<=2)
    {
        for(int i=0;i<n;i++)
        cout<<'a';
        cout<<endl;
    }
    else if(n>2)
    {
        for(int i=1;i<=n;i++)
        {
            int ok=(i+1)/2;
            if(ok%2==0)
                cout<<"a";
            else
                cout<<"b";
        }

    }
    cout<<endl;
        return 0;
}
