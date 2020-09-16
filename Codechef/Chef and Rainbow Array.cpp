#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        int one=0,two=0,three=0,four=0,five=0,six=0,seven=0;
        int arr[t+5];
        for(int i=0;i<t;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
                one++;
            if(arr[i]==2)
                two++;
            if(arr[i]==3)
                three++;
            if(arr[i]==4)
                four++;
            if(arr[i]==5)
                five++;
            if(arr[i]==6)
                six++;
            if(arr[i]==7)
                seven++;

        }
        if(one%2==0&&two%2==0&&three%2==0&&four%2==0&&five%2==0&&six%2==0&&seven%2!=0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
    return 0;
}
