#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1000005];
    int a=0;
    int b=0;
    int c=0;
    int x=25,y=50,z=100;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==x)
            a++;
        else if(arr[i]==y)
        {
             b++;
             if(a>0)
             {
                 flag=0;
                 a--;
             }
             else
             {
                 flag=1;
                 break;
             }
        }
        else
        {
            c++;
            if(a>=1&&b>=1)
            {
                flag=0;
                a--;
                b--;
            }
            else if(a>=3)
            {
                flag=0;
                a=a-3;
            }
            else
            {
                flag=1;
                break;

            }
        }


    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;


    return 0;

}
