#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    int n;
    cin>>n;
    int xx;
    int pasapasi=0,not0=0;
    int arr[n+5];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>xx;
        if(xx==0)
            flag=0;
        else
        st.insert(xx);

    }
   cout<<st.size()<<endl;
/*
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int xx = sizeof(arr)/sizeof(arr[0]);
      sort(arr,arr+xx)  ;
    for(int i=0;i<n;i++)
    {

        /*if(arr[i]==arr[i-1])
            pasapasi++;
        else if(arr[i]!=0)
                not0++;
                cout<<arr[i]<<" ";
    }
    /*
    for(int i=0;i<n;i++)
    {
       if(pasapasi==n)
       {
           cout<<arr[i]<<endl;
           return 0;
       }
       else
       {
          cout<<not0<<endl;
       return 0;
       }*/



    return 0;

}
