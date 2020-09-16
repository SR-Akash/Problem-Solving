#include<bits/stdc++.h>
using namespace std;
vector<int>vc;
int main()
{
    int n;
    cin>>n;
    int arr[100005];
    int num=18,sum=0,cnt=0;
    while(n!=0)
    {
        num++;
        cnt=num;
        sum=0;
        while(cnt!=0)
            {
              sum+=cnt%10;
              cnt/=10;
            }
            if(sum==10)
                n--;
    }
    cout<<num<<endl;
    return 0;
}
