#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N (ll)1e5

ll m , n ;

ll mod = 1e9 + 7 ;

ll cal(ll x ,ll n){
  ll res = 1 ;
  while(n > 0){
    if(n & 1) res = (res * x) % mod ;
    x = (x * x) % mod ;
    n >>= 1 ;
  }
  return res % mod ;
}

int main(){
  cin >> m >> n ;
  cout << cal(m,n) << endl ;
}