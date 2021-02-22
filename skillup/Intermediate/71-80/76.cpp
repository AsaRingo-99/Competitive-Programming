#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int n ;

int main(){
  cin >> n ;
  ll X[n] , A[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> A[i] ;
  }
  fill(X,X+n,0) ;

  for(int i = 0 ; i < n ; i++){
    int cnt  = 0 ;
    ll res = 0 ;
    for(int j = i ; j < n ; j++){
      res += A[j] ;
      X[cnt] = max(X[cnt],res) ;
      cnt++ ;
    }
  }
  for(ll u : X) cout << u << endl ;
}