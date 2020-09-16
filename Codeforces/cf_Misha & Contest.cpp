#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0,cnt=0,countt=0;
    int arr[105];
    int revarr[105];
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
           if(arr[i]>k)
           {
               break;
           }
           else
           {
               if(arr[i]<=k)
               count++;
           }
    }

    for(int i=n-1,j=0;i>=0;i--,j++)
    {
        revarr[i]=arr[j];
    }
    for(int i=0;i<n;i++)
    {
        if(revarr[i]>k)
            break;
        else
        {
            if(revarr[i]<=k)
            cnt++;
        }
    }


  /*for(int i=0;i<n;i++)
  {
      if(k>=arr[i])
      {
         countt++;
      }
  }
  cout<<countt<<endl;
  return 0;*/
  if(cnt==n)
    cout<<count<<endl;
  else
  {
       int result=cnt+count;
       cout<<result<<endl;
  }
    return 0;
}

