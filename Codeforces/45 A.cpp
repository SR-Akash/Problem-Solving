#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	string st[15];
	st[1]="January";
	st[2]="February";
	st[3]="March";
	st[4]="April";
	st[5]="May";
	st[6]="June";
	st[7]="July";
	st[8]="August";
	st[9]="September";
	st[10]="October";
	st[11]="November";
	st[12]="December";
	string month;
	cin>>month;

	ll n;
	cin>>n;
	ll current;
	for (int i=1;i<=12;i++)
	{
		if (st[i]==month)
		current=i;
	}

	for (int i=1;i<=n;i++)
	{
		current++;
		if (current>12)
		current=1;

	}
	cout<<st[current]<<endl;
	return 0;
}

