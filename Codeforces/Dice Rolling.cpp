#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        if(xx%2==0)
        cout<<xx/2<<endl;
        else if(xx%2!=0)
            cout<<(xx/2)<<endl;
    }
    return 0;
}
