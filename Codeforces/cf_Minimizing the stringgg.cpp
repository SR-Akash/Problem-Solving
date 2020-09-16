#include <bits/stdc++.h>
using namespace std;

char largest_alphabet(string s, int n)
{
    char max = 'A';
    for (int i=0; i<n; i++)
        if (s[i] > max)
            max = s[i];
    return max;
}

int main()
{

    int n;
    string s;
    cin>>n>>s;
    int ll=s.length();
    int size = sizeof(s) / sizeof(s[0]);

    cout << largest_alphabet(s,size);

    return 0;
}
