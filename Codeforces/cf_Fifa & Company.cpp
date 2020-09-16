#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ull unsigned long long
using namespace std;
int main()
{
    int n;

    int count=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
           count++;
    }
    cout<<count-1<<endl;
    return 0;
}
