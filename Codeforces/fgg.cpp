#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

	ll l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
    {
        set<ll>st;
        ll xx=i;
        ll cnt=0;
        while(xx)
        {
             cnt++;st.insert(xx%10);xx/=10;
        }

        if(st.size()==cnt)
        {
             cout<<i<<endl;return 0;
        }
    }

    cout<<-1<<endl;
	return 0;
}

