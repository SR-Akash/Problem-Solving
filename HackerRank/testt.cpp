#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string v="aeiouy";
    while(cin>>n)
    {
        string s;
        cin>>s;
        for(int i=1;i<n;i++)
        {
            bool l=false,r=false;
            for(int j=0;j<6;j++)
            {
                if(s[i]==v[j])
                    r=true;

                if(s[i-1]==v[j])
                    l=true;
            }

            if(r&&l){s[i]=s[i-1];s[i-1]=1;}
        }

        for(int i=0;i<n;i++)
            if(s[i]!=1)
            cout<<s[i];
        cout<<endl;
    }
    return 0;
}
