#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mark[10005];
int main()
{
    char  ch[]={'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    for(int i=0;i<11;i++)
        mark[ch[i]]=1;

        int flag=0;
        string st;
        cin>>st;
        string cpst;
        cpst=st;
        reverse(st.begin(),st.end());
        ll len=st.length();
        flag=0;
        for(int j=0;j<len;j++)
        {
            if(mark[st[j]]!=1)
            flag=1;
        }
        if(flag==0)
        {
         if(st==cpst)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
        }

            else cout<<"NO"<<endl;


    return 0;
}
