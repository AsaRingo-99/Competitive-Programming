#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF 1e7

int n ;

char BRW[] = {'B','R','W'} ;

int main(){
  cin >> n ;
  char S[5][n] ;
  for(int i = 0 ; i < 5 ; i++){
    for(int j = 0 ; j < n ; j++) cin >> S[i][j] ;
  }

  int dp[n+1][3] ;

  dp[0][0] = 0 ; dp[0][1] = 0 ; dp[0][2] = 0 ;

  for(int i = 1 ; i < n + 1 ; i++){
    for(int j = 0 ; j < 3 ; j++){
      int col = 5 ;
      for(int k = 0 ; k < 5 ; k++){
        if(S[k][i-1] == BRW[j]) col-- ;
      }
      int res = INF ;
      for(int k = 0 ; k < 3 ; k++){
        if(j == k) continue ;
        res = min(res,dp[i-1][k] + col) ;
      }
      dp[i][j] = res ;
    }
  }
  int res = INF ;
  for(int u : dp[n]) res = min(res,u) ;
  cout << res << endl ;
}