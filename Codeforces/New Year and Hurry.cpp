    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,k;
        cin>>n>>k;
        int ans=0;
        int sum=0;
        int sub=240-k;
        for(int i=1;i<=n;i++)
        {
            int res=(k+5*i);
            if(res<=240)
            {
                ans++;
                k+=5*i;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
