#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>5)
    {
        int x=n/5;
        int y=n-(5*x);
        int m=min(x,y);
        int mini=m*2;
        int maxi=y;
        cout<<mini<<" "<<maxi<<endl;
    }
    else if(n<=5&&n==2)
        cout<<0<<" "<<2<<endl;
    else if(n<=5&&n<2)
        cout<<0<<" "<<n<<endl;
    else if(n<=5&&n>2)
        cout<<0<<" "<<2<<endl;
    return 0;
}
