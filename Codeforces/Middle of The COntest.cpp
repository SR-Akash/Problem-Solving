// C++ Program to count pairs
// whose sum divisible by '4'
#include <bits/stdc++.h>
using namespace std;

// Program to count pairs whose sum divisible
// by '4'
int count4Divisibiles(int arr[], int n)
{
    int numPairs = 0;
for (i = 0; i < 10e9; i++)
{
    for (j = i+1; j < 10e9; j++)
    {
        int sum = i + j;
        if (sum % k == 0) numPairs++;
    }
 }
 return numPairs;
}

// Driver code
int main()
{

	int arr[] = { 1,2,2,3,2,4,10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << count4Divisibiles(arr, n);

	return 0;
}
