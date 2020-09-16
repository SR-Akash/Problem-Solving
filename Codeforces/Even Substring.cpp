#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll evenNumSubstring(char str[])
{
	ll len = strlen(str);
	ll count = 0;

	for (ll i = 0; i < len; i++)
	{
		ll temp = str[i] - '0';
		if (temp % 2 == 0)
			count += (i + 1);
	}

	return count;
}

int main()
{
    ll n;
    cin>>n;
	char str[65005];
	cin>>str;
	cout << evenNumSubstring(str) << endl;
	return 0;
}

