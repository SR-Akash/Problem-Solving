#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fibo[1000];
void fibonacchi()
{
    fibo[0]=0;
    fibo[1]=1;
    fibo[2]=1;
    for(int i=3; i<1000; i++)
        fibo[i]=fibo[i-1]+fibo[i-2];
}

int main()
{
    fibonacchi();
    ll n,k=2;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(fibo[k]!=0 && fibo[k]==i)
        {
            cout<<"O";
            k++;
        }
        else
            cout<<"o";
    }
    return 0;
}
