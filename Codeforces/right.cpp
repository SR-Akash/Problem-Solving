#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], res[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
           res[j][i]=arr[i][j];
        }

    }
for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

cout<<res[i][j]<<" ";
}
cout<< endl;
    }
    return 0;
}
