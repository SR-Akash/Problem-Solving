#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	ll ok=s*v1+t1+t1;
	ll hm=s*v2+t2+t2;
	if(ok<hm)cout<<"First"<<endl;
	else if(ok>hm)cout<<"Second"<<endl;
	else cout<<"Friendship"<<endl;
	return 0;

}
