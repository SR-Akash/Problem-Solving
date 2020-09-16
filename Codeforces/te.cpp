#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5],i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
        {
           arr[j][i]=arr[i][j];
        }

    }
for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
        {

cout<<arr[i][j]<<" ";
}
cout<< endl;
    }
    return 0;
}
