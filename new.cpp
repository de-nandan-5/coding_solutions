/*
D  E   A   D     C  A  L  M
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en                "\n"
#define pb                push_back
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define sz(x)             (int)((x).size())
#define all(x)            (x).begin(),(x).end()
#define ff first
#define ss second
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

typedef unsigned long long ull;
typedef long double lld;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// ll divisors(ll n)
// {
//     ll cnt = 0;
//     for (int i = 1; i*i <= n; i++)
//     {
//           if(n%i == 0)
//           cnt++;

//           if(i != n/i)
//           cnt++;
//     }
//     return cnt;
// }
//  // O(nlogn)
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     for (int j = i; j <= n; j=j+i)
//     //     {
//     //         ans[j]++; // i is a divisor of j
//     //     }    
//     // }
//     // for(auto x : ans)
//     // cout<<x<<" ";

// // O(nlog(logn))  almost linear
// ll prime[100000001];
// vector <ll> pr;
// void seive(ll n)
// {
//     for (int i = 2; i <= n; i++)
//     {
         
//          if(prime[i]==0)
//          {
//          pr.push_back(i);
//          for (int j = i*i; j <= n; j = j+i)
//          {
//            prime[j] = 1;
//          } 
//          prime[i] = prime[i]^1;
//          }  
//     }
// }
// vector<bool> isPrime;
// void makePrime(int r)
// {
// isPrime.resize(r+1, true);
// for(int i=2;i<=r;i++){
// if(isPrime[i]){
// for(int j=i+i;j<=r;j+=i){
// isPrime[j]=false;
// }
// }
// }
// }
// //coprime gcd(a,b) = 1
// /*
// gcd(a,b) = gcd(a,b-a) (b > a)
// gcd(a,b) = gcd(a,b%a) (b > a)
// O(log(max(a,b)))
// */
// /*
// a^b = 1 ; b = 0
// a^b = a^(b/2)*(b/2) ; b even
// a^b = a*(a^((b-1)/2)) ; b odd
// */
// //binary exponenetiation O(logb)
// /*
// 10^9+7 is used bcz its sufficiently large and prime
// and while finding modular inver of a number M should be coprime
// and hence it is comprime to all smaller numbers it is used

// modular inverse of any number is b^(m-2)%m  (m should be prime)
// O(log(m)) find using moduloExponenetialtion
// */
// ll pw(ll x,ll n,ll M)
// {
//     if(n==0)
//         return 1;
//     else if(n%2 == 0)        //n is even
//         return pw((x*x)%M,n/2,M);
//     else                             //n is odd
//         return (x*pw((x*x)%M,(n-1)/2,M))%M;

// }
// ll gcd(ll a ,ll b)
// {
//      if(a == 0)
//      return b;

//      return gcd(b%a,a); 
// }
// //fermat little
// ll inv(ll a, ll b)
// {
//     pw(a,b-2,b);
// }
// ll fact[N],invfact[N];
// void init()
// {
//     ll p = M;
//     fact[0] = 1;
//     int i;
//     for ( i = 1; i < N; i++)
//     {
//        fact[i] = i*fact[i-1]%p;
//     }
//      i--;
//      invfact[i] = pw(fact[i],p-2,p);
//      for(i--;i>=0;i--)
//      {
//         invfact[i] = invfact[i+1]*(i+1)%p;
//      }

//     //  for (int i = 0; i <= 10; i++)
//     //  {
//     //     cout<<fact[i]<<" ";
//     //  }
//     //  cout<<endl;
//     //  for (int i = 0; i <= 10; i++)
//     //  {
//     //     cout<<invfact[i]<<" ";
//     //  }
//     //  cout<<endl;
     
// }
// ll ncr(ll n,ll r)
// {
//    if(r > n || n < 0 || r <0)
//    return 0;
//    return fact[n]*invfact[r]%M*invfact[n-r]%M;
// }
/*
remove erase idiom --
remove(begin itr,end it ,val) returns an iterator after adjustingements in a container after removal of dersired eleemnt
and return iterator to the new end of container
erase(beg itr ,end itr) removes values in the range so val returned by remove  till end is removed

str.erase(remove(all(str),val),str.end);
*/
/*
std::unique(for itr,end itr)
remove all duplicateds justlike remove fnx not actuallly deltes but arranges elements
can be used with erase or resize to get the final container

arr3.resize(distance(arr3.begin(),unique(all(arr3))));
arr3.erase(unique(arr3.begin(), arr3.end()), arr3.end());
*/
/*
vector insert--
v.insert(itr,val)
insert before the elsement at itr pos

*/
/*
sting(a,b)   where a specifies number of elements and b specifies the character
*/
void solve()
{  
    cout<<"gfh\n";  
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
}