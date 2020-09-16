#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="hello",str1;
    cin>>str1;
    int len=str1.length();
    int count=0,j=0;
    for(int i=0;i<len;i++)
    {
        if(str1[i]==str[j])
            j++;
    }
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
