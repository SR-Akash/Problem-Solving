#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,cntt=0;;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x%2==0)
            cnt++;
        else
            cntt++;
    }
    if(cnt>cntt)
        cout<<cnt-1<<endl;
    else
        cout<<cntt-1<<endl;
    return 0;
}
