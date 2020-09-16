#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string str;
        cin >> str;
        int m = str[0], flag=1;
        for(int i=1; i<n; i++){
            int x = str[i];
            m = max(m, x);
        }
        for(int i=0; i<n; i++){
            int x = str[i];
            if(m==x && flag) {flag=0; continue;}
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
