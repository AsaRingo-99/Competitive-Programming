#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N 16
#define INF (ll)1e15

int n , m ;

int main(){
  cin >> n >> m ;
  ll D[n][n] ;
  ll T[n][n] ;
  for(int i = 0 ; i < n ; i++){
    fill(D[i],D[i]+n,INF) ;
    fill(T[i],T[i]+n,INF) ;
  }
  for(int i = 0 ; i < m ; i++){
    ll s , t , d , tim ;
    cin >> s >> t >> d >> tim ;
    D[s-1][t-1] = d ;
    D[t-1][s-1] = d ;
    T[s-1][t-1] = tim ;
    T[t-1][s-1] = tim ;
  }
  ll dp[1 << n][n] ;
  ll P[1 << n][n] ;
  dp[0][0] = 1 ;
  
  for(int i = 0 ; i < (1 << n) ; i++) fill(P[i],P[i]+n,INF) ;
  P[0][0] = 0 ;

  for(int S = 0 ; S < (1 << n) ; S++){
    for(int u = 0 ; u < n ; u++){
      if(P[S][u] == INF) continue ;
      for(int v = 0 ; v < n ; v++){
        if(D[v][u] == INF || P[S][u] + D[u][v] > T[u][v] || S >> v & 1) continue ;
        if(P[S][u] + D[u][v] < P[S|1 << v][v]){
          dp[S|1 << v][v] = 0 ;
          P[S|1 << v][v] = P[S][u] + D[u][v] ;
        }
        if(P[S][u] + D[u][v] == P[S|1 << v][v]) dp[S|1 << v][v] += dp[S][u] ;
      }
    }
  }
  if(P[(1 << n) - 1][0] == INF) puts("IMPOSSIBLE") ;
  else{
    cout << P[(1 << n) - 1][0] << " " << dp[(1 << n) - 1][0] << endl ;
  }
}