#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF 1e6

vector<int> p1 , p2 ;

int slv1(int n){
  int k = p1.size() ;
  int dp[k+1][n+1] ;
  for(int i = 0 ; i < k + 1 ; i++) fill(dp[i],dp[i]+n+1,INF) ;
  dp[0][0] = 0 ;
  for(int i = 1 ; i < k + 1 ; i++){
    for(int j = 0 ; j < n + 1 ; j++){
      if(j - p1[i-1] >= 0) dp[i][j] = min(dp[i][j-p1[i-1]]+1,dp[i-1][j]) ;
      else dp[i][j] = dp[i-1][j] ;
    }
  }
  return dp[k][n] ;
}

int slv2(int n){
  int k = p2.size() ;
  int dp[k+1][n+1] ;
  for(int i = 0 ; i < k + 1 ; i++) fill(dp[i],dp[i]+n+1,INF) ;
  dp[0][0] = 0 ;
  for(int i = 1 ; i < k + 1 ; i++){
    for(int j = 0 ; j < n + 1 ; j++){
      if(j - p2[i-1] >= 0) dp[i][j] = min(dp[i][j-p2[i-1]]+1,dp[i-1][j]) ;
      else dp[i][j] = dp[i-1][j] ;
    }
  }
  return dp[k][n] ;
}

int main(){
  int i = 1 , x = 0 ;
  while(x <= 1e5){
    x = i * (i + 1) / 2 * (i + 2) / 3 ;
    if(x % 2 == 1) p2.push_back(x) ;
    p1.push_back(x) ;
    i++ ;
  }
  vector< pair<int,int> > res ;
  while(true){
    int n ;
    cin >> n ;
    if(n == 0) break ;
    pair<int,int> ret(slv1(n),slv2(n)) ;
    res.push_back(ret) ;
  }
  for(int i = 0 ; i < res.size() ; i++) cout << res[i].first << " " << res[i].second << endl ;
}