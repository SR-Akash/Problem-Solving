#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ekhon,tokhon;
        cin>>ekhon>>tokhon;
        vector<string> vc;
        for(int i=0;i<ekhon;i++)
        {
            string st;
            cin>>st;
            vc.push_back(st);
        }

        vector<string>ok,hm;

        for(int j=0;j<tokhon;j++)
        {
            int accha;
            cin>>accha;

            for(int i=0;i<accha;i++)
            {
                string str;
                cin>>str;
                ok.push_back(str);
            }
        }
        for(int x=0;x<ekhon;x++)
        {
            for(int i=0;i<ok.size();i++)
            {
                if(vc[x]==ok[i])
                {
                    cout<<"YES"<<" ";
                    break;
                }
                else if(i==ok.size()-1)
                {
                    cout<<"NO"<<" ";
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
