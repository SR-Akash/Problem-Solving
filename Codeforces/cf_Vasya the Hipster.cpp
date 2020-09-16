#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int rem=a-b;
    int ans=rem/2;
    cout<<abs(mn)<<" "<<abs(ans)<<endl;
    return 0;
}
