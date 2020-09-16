#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mn=0,mx=0,j,y;
    for(int i=1;i<=n;i++)
    {
        if(i%7==1||i%7==2)
            mx++;
    }
    for(int i=1;i<=n;i++)
    {
        if(i%7==0||i%7==6)
            mn++;
    }
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
