#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Tet=0,Cub=0,Oct=0,Dod=0,Ico=0;
    int count=0;
    while(n--)
    {
        string st;
        cin>>st;
        if(st=="Tetrahedron")
            Tet++;
        if(st=="Cube")
            Cub++;
        if(st=="Octahedron")
            Oct++;
        if(st=="Dodecahedron")
            Dod++;
        if(st=="Icosahedron")
            Ico++;

    }

    cout<<(Tet*4)+(Cub*6)+(Oct*8)+(Dod*12)+(Ico*20)<<endl;


    return 0;
}
