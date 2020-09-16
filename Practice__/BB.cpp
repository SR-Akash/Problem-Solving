
#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	//int t;cin>>t;while(t--)
	{

	    ll n;
		cin>>n;
		ll arr[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
			    ll sum=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				sum+=(arr[i]*arr[j]);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
