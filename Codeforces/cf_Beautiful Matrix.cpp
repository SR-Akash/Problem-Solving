#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int arr[6][6];
    int xx,yy,res;
    int arr;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr;
            if(arr==1)
            {
                xx=i;
                yy=j;
            }
        }
    }
    xx=abs(xx-2);
    yy=abs(yy-2);
    cout<<yy+xx<<endl;

}

