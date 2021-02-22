#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N 16
#define INF (ll)1e10

int N , M ;
ll dp[(1 << MAX_N) - 1][MAX_N] ;
ll D[MAX_N][MAX_N] ;
ll TIM[MAX_N][MAX_N] ;

ll rec(int S , int v , ll t , int &count){
  if(S == (1 << N) - 1 && v == 0){
    count++ ;
    return dp[S][v] = 0 ;
  }
  //if(dp[S][v] >= 0) return dp[S][v] ;

  ll res = INF ;
  for(int u = 0 ; u < N ; u++){
    if(S >> u & 1) continue ;
    if(t + D[v][u] > TIM[v][u]) continue ;
    if(D[v][u] == INF) continue ;
    res = min(res,rec(S | (1 << u) , u , t + D[v][u] , count) + D[v][u] ) ;
  }
  return dp[S][v] = res ;
}

int main(){
  cin >> N >> M ;
  int count = 0 ;

  for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < N ; j++) D[i][j] = INF ;
  }

  memset(dp,-1,sizeof(dp)) ;
  memset(TIM,0,sizeof(TIM)) ;

  for(int i = 0 ; i < M ; i++){
    ll s , t , d , sec ;
    cin >> s >> t >> d >> sec ;
    D[s-1][t-1] = d ;
    D[t-1][s-1] = d ;
    TIM[s-1][t-1] = sec ;
    TIM[t-1][s-1] = sec ;
  }

  ll ans = rec(0,0,0,count) ;
  if(ans == INF) cout << "IMPOSSIBLE" << endl ;
  else cout << ans << " " << count << endl ;
}