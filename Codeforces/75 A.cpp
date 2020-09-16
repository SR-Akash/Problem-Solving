#include<bits/stdc++.h>
#define ll long long
using namespace std;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
 {
     fast();

     ll xx,yy;
     cin>>xx>>yy;
     vector<ll>vc;
     ll sum=xx+yy;
     ll i=0;
     ll mod;
     while(xx)
     {

         mod=xx%10;
         if(mod!=0)
         vc.push_back(mod);
         //cout<<xx%10<<endl;
     }


     for(int i=0;i<vc.size();i++)
        cout<<vc[i]<<" ";

 }
