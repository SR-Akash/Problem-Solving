#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPalindrome(string& str)
{
    for (int i = 0, j = str.length()-1; i<j; ++i, --j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

int longestPalindrome(string& str, string& palindromeStr)
{
    int max = 0, start = 0, end = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        for (int j = i+1; j < str.length(); ++j)
        {
            string sub = str.substr(i, j);
            if (isPalindrome(sub) && max < sub.length())
            {
                max = sub.length();
                start = i;
                end = j;
            }
        }
    }
    palindromeStr = str.substr(start, end);
    return max;
}

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
            string str ;
            cin>>str;

            string palindromeStr;
            cout << longestPalindrome(str, palindromeStr) << '\n';
    }
    return 0;
}
