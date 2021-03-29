

#include<stdio.h>
int gcd(long int a,long int b)
{
    if(a%b==0)return b;
   else if(b%a==0)return a;
    else if(a>b)return gcd(b,a%b);
    return gcd(a,b%a);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0){
    long int a,b;
    scanf("%ld%ld",&a,&b);
    long int n=gcd(a,b);
    printf("%ld %ld\n",n,(a*b)/n);
    t--;
    }
    return 0;
}