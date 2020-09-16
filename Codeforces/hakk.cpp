#include <bits/stdc++.h>
using namespace std;

int main()

{
    ios::sync_with_stdio(0);
    long long int i, j = 0, t, l, m, n;
    long long int a, b;

    cin >> t;

    while(t--)
    {
        cin >> n >> i >> j;

        b = ((n/2)*j);
        if (n%2!=0)
        {
            b = (n/2)*j + i;
        }

        a = n*i;

        if (a<b)
        {
            cout << a << endl;
        }

        else
        {

            cout << b << endl;
        }

    }



    return 0;
}
