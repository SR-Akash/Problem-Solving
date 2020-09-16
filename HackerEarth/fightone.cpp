// C++ implementation to find such pairs
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    long long n,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        st.insert(num);
    }
    //for(int i=0;i<n;i++)

    cout<<st.size()*2<<endl;
    return 0;
}
