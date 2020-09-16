    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll y,k,n,hm,sub;
        int sum;
        int test=0;
        int flag=0;
        //int arr[1000005];
        cin>>y>>k>>n;
        ll div=n-y;
        ll ok=n-y;
        ll i=y;
        hm=i%k;
        sub=k-hm;
                    if(sub<=ok)
                    {
                        cout<<sub<<" ";
                        sub+=k;
                           while(sub<=ok)
                           {
                                 cout<<sub<<" ";
                                 sub+=k;
                           }

                    }
                    cout<<endl;

                        }

        else
            cout<<"-1"<<endl;
        return 0;
    }
