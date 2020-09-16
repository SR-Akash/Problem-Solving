#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ll n,m,xx;
    string st,str;
    cin>>n>>m;
    cin>>st;
    cin>>xx>>str;

    m--;
    cout << st[m];
    for (int i = 0;i<xx;i++)
        {
        if (str[i] == 'R'){
            cout << st[m+1];
            m++;
        }
        else if (str[i] == 'L'){
            cout <<st[m-1];
            m--;
        }
    }
    cout << endl;
return 0;
}
