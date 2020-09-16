

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int binaryToDecimal(ll n)
{

    ll num = n;
    ll dec_value = 0;
    ll base = 1;
    ll temp = num;
    while (temp)
        {

        ll last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;

    }
    return dec_value;
}




int main()
{

   ll num;
   cin>>num;
   ll ok=binaryToDecimal(num);
   ll cnt=0;
   for(ll i=1;i<ok;i*=4)
   {
      cnt++;
   }
   cout<<cnt<<endl;
    return 0;
}
