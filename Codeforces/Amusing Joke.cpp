#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss,sss;
    cin>>s>>ss>>sss;
    int l=s.length();
    int ll=ss.length();
    int lll=sss.length();
    string sum=s+ss;
    sort(sum.begin(),sum.end());
    sort(sss.begin(),sss.end());
    if(sum==sss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
