#include<bits/stdc++.h>
#define ll long long
using namespace std;

void primeFactors(ll n)
{
	while (n%2 == 0)
	{
		n = n/2;
	}
	cout<<2<<endl;

	for(ll i=3;i<=sqrt(n);i=i+2)
	{
		while (n%i==0)
		{
			n=n/i;
			cout<<i<<endl;
		}
	}
	if(n>2)
    {
        cout<<n<<endl;
    }

}

int main()
{
	int n = 123 ;
	primeFactors(n);
	return 0;
}

