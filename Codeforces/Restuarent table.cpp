#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
        int n,a,b;
        int sum=0;
        scanf("%d%d%d",&n,&a,&b);
        int c=0;
        int xx[1000005];
    for(int i=0;i<n;i++)
    {

        scanf("%d",&xx[i]);
        if(xx[i]==1)
        {
            if(a!=0) a--;
            else if(b!=0)
            {
                b--;c++;
                }
            else if(c>0)c--;
            else{
                    sum+=xx[i];}

        }
        else
        {
            if(b!=0)b--;
            else
                sum+=xx[i];
        }


    }


        printf("%d",sum);




    return 0;
}
