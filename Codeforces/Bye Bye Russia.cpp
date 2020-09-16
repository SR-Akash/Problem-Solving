#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        int fhour,fmin,lhour,lmin;
        cin>>fhour>>fmin>>lhour>>lmin;
        int minn=lmin-fmin;
        int hour=(lhour-fhour)*60;
        cout<<"Case "<<i<<": "<<minn+hour<<endl;
        i++;
    }
    return 0;
}
