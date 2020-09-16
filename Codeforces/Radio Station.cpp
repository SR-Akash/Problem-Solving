#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m;
	cin>>n>>m;
	map<string,string>mp;
	string a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		mp[b]=a;
	}

	for (int j=0;j<m;j++)
	{
		cin>>a>>b;
		string x;
		x = b.substr(0,b.size()-1);
		cout<<a<<" "<<b<<" #"<<mp[x]<<endl;
	}
	return 0;
}

