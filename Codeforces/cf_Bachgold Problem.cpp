#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int c=0;
        for(int j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
            p++;
            break;
            }

        }
        if(p==0&&n!=1)
        {
             cout<<i<<endl;
        }
    }

    return 0;
}

