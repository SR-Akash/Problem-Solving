#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int n;
    string st;
    cin>>n;
    getchar();
    getline(cin,st);
    int count=0,compare=0;
    for(int i=0;i<n;i++)
    {
       if(isupper(st[i]))
          count++;
     compare=max(count,compare);
        if(st[i]==' ')
            count=0;
    }
    cout<<compare<<endl;
    return 0;
}
