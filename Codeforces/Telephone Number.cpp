#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        string st;
        cin>>st;
        ll flag=0;
        if(x>=11)
        {
             for(int i=0;i<=(x-11);i++)
        {
            if(st[i]=='8')
            {
                flag=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        }
        if(flag==0)
        cout<<"NO"<<endl;

        }


        return 0;

    }


