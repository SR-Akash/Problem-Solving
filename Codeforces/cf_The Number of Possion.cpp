#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n>a&&n>b)
    {
        int add=(a+b)/2;
        cout<<add+1<<endl;
    }
    return 0;

}
