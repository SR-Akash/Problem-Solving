#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    string str;

    while(cin>>str&&str!="*")
    {

                if(str=="Hajj")
                cout<<"Case "<<i<<": "<< "Hajj-e-Akbar"<<endl;
                else
                cout<<"Case "<<i<<": "<< "Hajj-e-Asghar"<<endl;

        i++;
    }
    return 0;
}
