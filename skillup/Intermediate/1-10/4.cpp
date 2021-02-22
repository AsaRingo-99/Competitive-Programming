#include <bits/stdc++.h>
using namespace std ;
using ll = long long ;
#define MAX_M (ll)100
#define MAX_N (ll)100
#define INF (ll)1e9

int n , m  ;

int main(){
  cin >> n >> m ;

  ll A[n][m] ;
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cin >> A[i][j] ;
    }
  }

  ll ans = 0 ;
  for(int k = 0 ; k < m ; k++){
    for(int i = k + 1 ; i < m ; i++){
      ll tmp = 0 ;
      for(int j = 0 ; j < n ; j++){
        tmp += max(A[j][i],A[j][k]) ;
      }
      ans = max(ans,tmp) ;
    }
  }
  cout << ans << endl ;
}