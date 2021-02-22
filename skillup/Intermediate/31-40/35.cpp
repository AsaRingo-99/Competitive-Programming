#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int N , W ;
int v[MAX_N] , w[MAX_N] ;

int main(){
  cin >> N >> W ;
  int dp[N+1][W+1] ;
  for(int i = 0 ; i < W + 1 ; i++) dp[0][i] = 0 ;
  for(int i = 0 ; i < N ; i++){
    cin >> v[i] >> w[i] ;
  }

  for(int i = 1 ; i <= N ; i++){
    for(int j = 0 ; j <= W ; j++){
      if(w[i-1] <= j) dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]) ;
      else dp[i][j] = dp[i-1][j] ;
    }
  }
  cout << dp[N][W] << endl ;
}