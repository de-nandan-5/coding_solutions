#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll rec(ll a,ll n,ll m)
{  if(n==0)
    return 1;
    ll x = rec(a,n/2,m);
     x = (x*x)%m;
     if(n&1)
     x =(x*a)%m;
     return x;
 } 
int main()
{
   ll a,b,res;
  ll M = 1e9+7;
  cin>>a>>b;
  res = rec(a,b,M);
  cout<<res<<endl;
}
