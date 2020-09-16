#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int r=1;
    int res=n-r;
    int x=ceil(res/2.00);
    int y=res-x;
    while(x%3==0||y%3==0)
    {
        x--; y++;
    }
    cout<<r<<" "<<x<<" "<<y<<endl;
    return 0;
}
