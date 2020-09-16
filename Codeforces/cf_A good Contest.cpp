#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int bf,af;
        cin>>s>>bf>>af;
        if(bf>=2400)
        {
            if(af>bf)
                flag++;
        }
    }
    if(flag>=1&&flag!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
