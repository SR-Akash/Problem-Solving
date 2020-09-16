#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>sett;
    int year;
    while( cin>>year)
    {
        while(1)
    {
    year++;
    int x=year%10;
    int y=year/10;
    int z=y%10;
    int a=y/10;
    int b=a%10;
    int c=a/10;
    int d=c%10;
    int e=c/10;
    sett.insert(d);
    sett.insert(b);
    sett.insert(z);
    sett.insert(x);
    //year++;
    if(d!=b&&d!=z&&d!=x&&b!=z&&b!=x&&z!=x)
            break;

    }
    cout<<year<<endl;
    }

    return 0;
}
