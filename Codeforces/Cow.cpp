#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(i<t)
    {
        int x1,y1,x2,y2;
        cout<<"Case "<<i+1<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            int x,y;
            cin>>x>>y;
            if((x>=x1&&x<=x2)&&(y>=y1&&y<=y2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        i++;
    }



    return 0;
}
