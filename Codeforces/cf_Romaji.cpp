#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
   cin>>str;

        int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='n')
            continue;
        else
            {
                if(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
                        continue;
                else

                    {
                        cout <<"NO"<< endl;
                        return 0;
                    }
            }

    }
    cout << "YES" << endl;

    return 0;

}

