#include <bits/stdc++.h>
using namespace std ;
typedef unsigned long long ll ;
#define INF (ll)1e12

string A ;
ll b , c ;

ll cal(ll k , ll n , ll mod){
  ll res = 1 ;
  while(n > 0){
    if(n & 1){
      res *= k ;
      res %= mod ;
    }
    k *= k ;
    k %= mod ;
    n >>= 1 ;
  }
  return res % mod ;
}

int main(){
  cin >> A >> b >> c ;
  ll a = A[A.size() - 1] - '0' ;
  ll x = cal(b,c,10000000) ;
  if(b % 10 == 0 && c >= 2) cout << (a * a * a * a) % 10 << endl ;
  else cout << cal(a,x,10) << endl ;
}