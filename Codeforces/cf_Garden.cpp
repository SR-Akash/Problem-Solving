
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,result,res;
    int maximum=101;
    cin>>n>>k;
    while(n--)
    {
       int div;
        cin>>div;
        if(k%div==0)
        {
            result=k/div;
            maximum=min(maximum,result);
        }

    }
    cout<<maximum<<endl;
    return 0;
}
