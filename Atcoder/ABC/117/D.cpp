#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define INF (ll)1e12
#define MAX_N (ll)1e5

int n ;
ll k ;

int X[45] ;

void cal(ll x){
  int t = 0 ;
  while(x > 0){
    if(x & 1) X[t]++ ;
    x >>= 1 ;
    t++ ;
  }
}

int main(){
  cin >> n >> k ;
  memset(X,0,sizeof(X)) ;
  ll A[n] ;
  for(int i = 0 ; i < n ; i++){
    cin >> A[i] ;
    cal(A[i]) ;
  }
  ll val = 0 ;
  for(int i = 45 ; i >= 0 ; i--){
    if(2 * X[i] >= n) continue ;
    if(val + pow(2,i) > k) continue ;
    val += pow(2,i) ;
  }
  ll ans = 0 ;
  for(int i = 0 ; i < n ; i++){
    ans += (val ^ A[i]) ;
  }
  cout << ans << endl ;
}