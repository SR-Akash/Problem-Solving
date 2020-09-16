#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ll n;
    ll x,y;
    cin>>n;
    while(n--)
    {

	    cin>>x>>y;
	    if(x-y>1)
             cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


	return 0;
}

