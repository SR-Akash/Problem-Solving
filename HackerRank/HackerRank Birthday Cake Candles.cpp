#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[100];
    cin >> n;

    for(i = 0; i < n; ++i)
    {
       cin >> arr[i];
    }
     float arr[0]=0;
    for(i = 1;i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
           arr[0]++;
    }

    cout << "Largest element = " << arr[0];

    return 0;
}
