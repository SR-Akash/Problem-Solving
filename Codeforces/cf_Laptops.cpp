#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    //vector<int>happy;
    //vector<int>poor;
    int n;
    cin>>n;
    int a[100001],b[100001];
    int count=0;
    for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
             if(b[i]>a[i])
                count++;
        }

        if(count>0)
            cout<<"Happy Alex"<<endl;
        else
            cout<<"Poor Alex"<<endl;

    return 0;
}
