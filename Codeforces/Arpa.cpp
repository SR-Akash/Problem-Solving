#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t;
	cin >>n>>k>>t;
	if(t<=k)
		cout<<t<<endl;
	else if(t>=k&&t<=n)
		cout<<k<< endl;
	else
    {
		int ok=t-n;
		cout <<k-ok<< endl;
	}
	return 0;
}
