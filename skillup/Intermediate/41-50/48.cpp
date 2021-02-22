#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N 50
#define INF (ll)1e18

int dp[MAX_N + 1][MAX_N + 1] ;
int w[MAX_N] ;

int rec(int l , int r){
  if(r - l <= 1) return 0 ; 
  if(r - l == 2){
    if(abs(w[l] - w[l+1]) <= 1) return 2 ;
    else return 0 ;
  }

  if(dp[l][r] != -1) return dp[l][r] ;

  if(abs(w[l] - w[r-1]) <= 1 && rec(l+1,r-1) == r - l - 2) dp[l][r] = max(dp[l][r] , r - l) ;

  for(int i = l + 1 ; i < r ; i++){
    dp[l][r] = max(dp[l][r],rec(l,i) + rec(i,r)) ;
  }
  return dp[l][r] ;
}

int main(){
  vector<int> res ;
  while(true){
    int n ;
    cin >> n ;
    if(n == 0) break ;
    for(int i = 0 ; i < n ; i++) cin >> w[i] ;
    for(int i = 0 ; i < n + 1 ; i++) fill(dp[i],dp[i]+n+1,-1) ;
    res.push_back(rec(0,n)) ;
  }
  for(int u : res) cout << u << endl ;
}