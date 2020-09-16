#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        unsigned long long n,m,div,sum,rem;
        cin>>n>>m;
        div=n/m;
        sum=((m*(m-1))/2)*div;
        rem=n%m;
        sum=sum+((rem*(rem+1)/2));
        cout<<sum<<endl;
    }

return 0;
}
