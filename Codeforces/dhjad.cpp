#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int angel;
        cin>>angel;
        if(360%(180-angel)==0)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


    }

    return 0;
}

