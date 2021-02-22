#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int D , N ;

int main(){
  cin >> D >> N ;
  int T[D] , C[N] ;
  pair<int,int> rng[N] ;
  for(int i = 0 ; i < D ; i++) cin >> T[i] ;
  for(int i = 0 ; i < N ; i++) cin >> rng[i].first >> rng[i].second >> C[i] ;
  int dp[D][N] ;
  bool ok[N] ;
  
  for(int i = 0 ; i < D; i++) fill(dp[i],dp[i]+N,0) ;

  for(int i = 1 ; i < D; i++){
    fill(ok,ok+N,false) ;
    for(int j = 0 ; j < N; j++){
      if( rng[j].first <= T[i-1] && T[i-1] <= rng[j].second ) ok[j] = true ;
    }
    for(int j = 0 ; j < N ; j++){
      if( rng[j].first > T[i] || T[i] > rng[j].second ) continue ;
      for(int k = 0 ; k < N ; k++){
        if(ok[k]) dp[i][j] = max(dp[i][j],dp[i-1][k] + abs(C[j] - C[k])) ;
      }
    }
  }
  int res = 0 ;
  for(int u : dp[D-1]) res = max(res,u) ;
  cout << res << endl ;
}