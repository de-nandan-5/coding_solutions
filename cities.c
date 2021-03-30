#include<stdio.h>
#include<math.h>
long int rec(int a,long int n,long int m)
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
     int t;
     long int M = pow(10,9)+7;
     scanf("%d",&t);
     for (int i = 0; i <t; i++)
     {
        long int n,ans,N;
        scanf("%ld",&n);
        N = pow(2,n);
        ans = rec(2,n,M);
        printf("%ld\n",ans-1);
     }
     
}