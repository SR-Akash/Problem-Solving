///*******
//
///HR_Bappy
//
///*******

#include<bits/stdc++.h>
#define pb push_back
#define mkp make_pair
#define maxx 1000000005
#define MOD 1000003
#define sf(n) scanf("%lld", &n);
#define sff(n,m) scanf("%lld %lld", &n, &m)
#define pf(n) printf("%lld\n", n)
#define pff(n,m) printf("%lld %lld\n", n, m)
#define mem(a) memset(a, 0, sizeof(a))
#define fr(i,n) for(ll i=0; i<n; i++)
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
#define pi 2*acos(0.0)
#define F first
#define S second
#define EPS 1e-9

using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main()
{
    int n;
    cin >> n;
    getchar();
    char a[3000];
    gets(a);
    //cout << strlen(a)<< endl;
    cin >> n;
    stack<char>b;
    int f = 0;
    while(n--){
        string x;
        cin >> x;
        if(x.size() == 9)   b.pop();
        else if(x.size() == 8) f = 1;
        else if(x.size() == 5) b.push(' ');
        else if(x.size() == 1){
           // cout << x[0] << " ";
            if(f == 1){
                if(x[0] > 80)
                    b.push((char)(x[0] - 32));
                else b.push(x[0]);
                f = 0;
                //cout << (char)(x[0]- 32) <<" ";
            }
            else b.push(x[0]);
        }
    }
    f = 1;
    if(strlen(a) == b.size()){
        for(int i = strlen(a)-1; i>= 0; i--){
            if(b.top() != a[i]){f = 0;break;}
            b.pop();
        }
        if(f == 1)cout << "Correct" << endl;
        else cout << "Incorrect" << endl;
    }
    else cout << "Incorrect" << endl;

    return 0;
}
