
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int getMaxLength(ll arr[], int n)
{
	int count = 0;
	int result = 0;

	for (int i = 0; i < n; i++)
	{

		if (arr[i] == 0)
			count = 0;


		else
		{
			count++;
			result = max(result, count);
		}
	}

	return result;
}

int main()
{

    ll  n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ll ok=getMaxLength(arr,n);

    ll zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            break;

    }
    if(zero==n)
    {
        cout<<0<<endl;
        return 0;
    }
    ll f=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            f++;
        else if(arr[i]==0)
            break;
    }
    ll b=0;
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            b++;
        else if(arr[i]==0)
            break;
    }
    reverse(arr,arr+n);
    //cout<<ok<<endl;
    //cout<<b<<endl;
    if(ok==b)
        cout<<ok+f<<endl;
    else if(f==b&&arr[0]==1&&arr[n-1]==1)
        cout<<ok<<endl;
    else if(ok>b&&arr[0]==1&&arr[n-1]==1)
        cout<<f+b<<endl;
    else
        cout<<ok<<endl;





	return 0;
}
