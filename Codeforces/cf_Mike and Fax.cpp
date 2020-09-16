#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>s>>n;

        int len = s.size();
        string ss=s;
        int plen = len/n;
        //cout << plen << endl;
        for(int i=0; i<len; i+=plen)
        {
            reverse(ss.begin()+i, ss.begin()+(i+plen) );
            //cout << ss << endl;
        }
        if(s==ss) cout << "YES" << endl;
        else cout << "NO" << endl;

    return 0;
}
