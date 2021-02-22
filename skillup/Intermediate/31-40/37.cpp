#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int n , m ;

int main(){
  cin >> n >> m ;
  int c[m] ;
  for(int i = 0 ; i < m ; i++) cin >> c[i] ;
  int dp[m+1][n+1] ;
  for(int i = 0 ; i < m + 1 ; i++) fill(dp[i],dp[i]+n+1,-1) ;
  dp[0][0] = 0 ;
  for(int i = 1 ; i < m + 1 ; i++){
    for(int j = 0 ; j < n + 1 ; j++){
      if(j - c[i-1] >= 0 && dp[i-1][j] >= 0 && dp[i][j-c[i-1]] >= 0) dp[i][j] = min(dp[i-1][j],dp[i][j-c[i-1]] + 1) ;
      else if(j - c[i-1] >= 0 && dp[i][j-c[i-1]] >= 0) dp[i][j] = dp[i][j-c[i-1]] + 1 ;
      else if(dp[i-1][j] >= 0) dp[i][j] = dp[i-1][j] ;
    }
  }
  cout << dp[m][n] << endl ;
}