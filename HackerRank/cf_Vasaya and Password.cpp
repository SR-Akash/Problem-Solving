#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string st;
    cin>>n;
    while(n--)
    {

        cin>>st;
        int len=st.length();
        int upp=0,low=0,dig=0;
        char ch='A';
        char ch1='a';
        char ch2='1';
        for(int i=0;i<len;i++)
        {

            if(isupper(st[i]))
            {
               upp++;
            }
            if(islower(st[i]))
            {
                low++;
            }
            if(isdigit(st[i]))
            {
                dig++;
            }

        }
        if(upp==0)
        {

            for(int i=0;i<len;i++)
            {
                if(islower(st[i])&&low>1)
                {
                    st[i]=toupper(st[i]);
                    upp++;
                    low--;
                    break;
                }
                else if(isdigit(st[i])&&dig>1)
                {
                    st[i]='A';
                    upp++;
                    dig--;
                    break;
                }


            }

        }

             if(low==0)
             {

                 for(int i=0;i<len;i++)
                 {
                     if(isupper(st[i])&&upp>1)
                     {
                         st[i]=tolower(st[i]);
                         low++;
                         upp--;
                         break;
                     }
                     else if(isdigit(st[i])&&dig>1)
                     {
                         st[i]='a';
                         low++;
                         dig--;
                         break;
                     }

                 }

             }

            else
             {
                 for(int i=0;i<len;i++)
                 {
                     if(islower(st[i])&&low>1)
                     {
                         st[i]='5';
                         dig++;
                         low--;
                         break;


                     }
                     else if(isupper(st[i])&&low>1)
                     {
                         st[i]='6';
                         upp++;
                         dig--;
                         break;
                     }
                 }
             }

    cout<<st<<endl;
    }
    return 0;
}
















