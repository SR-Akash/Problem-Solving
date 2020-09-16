#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<=0)
                count++;

        }
        if(count<k)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}



