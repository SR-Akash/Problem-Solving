#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int a,b;
    long long flag=1,flag1=1;
    cin >>a>>b;
    long long ans=min(a,b);
    for(int i=1;i<=ans;i++)
    {
        flag*=i;
    }
    //long long ans=__gcd(flag,flag1);
    cout <<flag<<endl;
    return 0;
}
