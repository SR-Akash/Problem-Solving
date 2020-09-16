#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    cin>>s>>st;
    int len=s.length();
    int lenn=st.length();
    string newa=string(lenn,'0')+s;
    string newb=string(len,'0')+st;
     //cout<<newa<< "  "<<newb<<endl;
    if(newa>newb)
        cout<<">"<<endl;
    else if(newa<newb)
        cout<<"<"<<endl;
    else
    cout<<"="<<endl;
    return 0;
}
