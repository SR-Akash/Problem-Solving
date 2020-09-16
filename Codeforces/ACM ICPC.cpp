#include <bits/stdc++.h>
using namespace std;

void findOptimalPairs(long long arr[], long long xx)
{

	sort(arr, arr + xx);
	long long ans=0;
	for (int i = 0, j = xx - 1; i <= j; i++, j--)
    {
        //long long sum=(arr[i] + arr[j])* (arr[i] + arr[j]);
        //ans+=sum;
        cout << "(" << arr[i] << ", " << arr[j] << ")" << " ";

    }
    //cout << ans<<endl;

}

int main()
{

    long long xx;

    cin>>xx;
    long long arr[xx+5];
	for(int i=0;i<xx;i++)
    {
        cin>>arr[i];
    }

	long long N = sizeof(arr) / sizeof(arr[0]);

	findOptimalPairs(arr, xx);
	return 0;
}

