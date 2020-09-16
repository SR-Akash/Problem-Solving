#include<bits/stdc++.h>
#define ll long long
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast();

    ll a,b,c;
    cin>>a>>b>>c;

    ll mn=min(a,b);
    ll flag=0;
    if(mn<a||mn<b)
        flag=1;

    mn=(mn+c)*2;
    cout<<mn+flag<<endl;

    return 0;
}
