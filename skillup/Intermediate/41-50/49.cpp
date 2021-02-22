#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)15
#define INF 1e6

int n , m ;

int dp[1 << MAX_N][MAX_N] ;
int d[MAX_N][MAX_N] ;

int rec(int S , int p){
  if(S == (1 << n) - 1 && p == 0) return dp[S][p] = 0 ;
  if(dp[S][p] >= 0) return dp[S][p] ;

  int res = INF ;
  for(int i = 0 ; i < n ; i++){
    if(S >> i & 1) continue ;
    res = min(res , rec(S | (1 << i),i) + d[p][i]) ;
  }
  return dp[S][p] = res ;
}

int main(){
  cin >> n >> m ;
  memset(d,INF,sizeof(d)) ;
  for(int i = 0 ; i < m ; i++){
    int s , t , dis ;
    cin >> s >> t >> dis ;
    d[s][t] = dis ;
  }
  memset(dp,-1,sizeof(dp)) ;
  int ans = rec(0,0) ;
  if(ans == INF) cout << -1 << endl ;
  else cout << ans << endl ;
}