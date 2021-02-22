#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef pair<ll,int> P ;
#define MAX_M (ll)100
#define MAX_N (ll)1e5
#define INF (ll)1e12

ll gcd(ll a , ll b){
  if(b == 0) return a ;
  return gcd(b , a % b) ;
}

ll gcdll(ll a , ll b){
  ll p = gcd(a,b) ;
  return a * b / p ;
}

ll n , m ;

int main(){
  cin >> n >> m ;
  ll a ; cin >> a ; a /= 2 ;
  if(a % 2 == 0){
    cout << 0 << endl ;
    return 0 ;
  }
  for(int i = 1 ; i < n ; i++){
    ll b ; cin >> b ; b /= 2 ;
    if(b % 2 == 0){
      cout << 0 << endl ;
      return 0 ;
    }
    a = gcdll(a,b) ;
  }
  //cout << a << endl ;
  cout << (m + a) / 2 / a << endl ;
}