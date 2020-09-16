#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f,g,h,i,j,sum;
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    //printf("%d",d);
    e=d%10;
    f=d/10;
    g=f%10;
    h=f/10;
    //printf("%d",h);
    i=h%10;
    j=h/10;
    sum=a+c+e+g+i;
    //b=n%100;
    printf("%d\n",sum);
    return 0;
}
