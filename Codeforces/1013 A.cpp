#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, n1 = 0;
    int s1 = 0, s2 = 0;
    for(cin >> n;n;n--){
        int a;
        cin >> a;
        n1++;
        s1 += a;
    }
    while(n1--){
        int a;
        cin >> a;
        s2 += a;
    }

    if(s1>=s2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
