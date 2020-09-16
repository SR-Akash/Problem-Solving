#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n;
    string st;
    cin>>n>>st;
    int ll=st.length();
    int count=0;
    char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=0;i<ll;i++)
    {
        st[i]=toupper(st[i]);
    }
    for(int i=0;i<ll;i++)
    {
       for(int j=0;j<ll;j++)
       {
            if(st[j]==alpha[i])
            {
                count++;
                break;
            }
        }
    }

    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
