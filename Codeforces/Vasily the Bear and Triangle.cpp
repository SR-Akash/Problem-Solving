#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0&&y>0)
        cout<<"0"<<" "<<x+y<<" "<<x+y<<" "<<"0"<<endl;
    else if(x<0&&y>0)
        cout<<-(-x-(-y))<<" "<<"0"<<" "<<"0"<<" "<<abs(-x+(y))<<endl;
    else if(x>0&&y<0)
    cout<<"0"<<" "<<(-x-(-y))<<" "<<abs(-x+(y))<<" "<<"0"<<endl;
    else
        cout<< (x+(y))<<" "<<"0"<<" "<<"0"<<" "<<-(-x+(-y)) <<endl;
    return 0;

}

