#include<stdio.h>
#include<math.h>
long int rec(long int a,long int n,long int m)
{  if(n==0)
    return 1;
    long int x = rec(a,n/2,m);
     x = (x*x)%m;
     if(n&1)
     x =(x*a)%m;
     return x;
 } 
int main()
{
  long int a,b,res;
  long int M = pow(10,9)+7;
  scanf("%ld%ld",&a,&b);
  res = rec(a,b,M);
  printf("%ld",res);
}