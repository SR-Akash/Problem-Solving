#include<iostream>

using namespace std;


int main()
{

    int N,k,n;
    cin >> N>>k;



    for(int i = 2; i <= N; i++){
        int flag = 0;

        for(int j = 2; j<=i/2;j++)
        {
             if(i% j == 0)
             {
                 flag=1;
                 break;
             }
        }

        if(flag==0&&N!=1)
        {
             string str;
            str.assign(100);
            cout << str << " ";
        }

    }

   return 0;
}
