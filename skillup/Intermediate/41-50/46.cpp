#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int n ;

int main(){
  cin >> n ;
  ll w[n+1] ;
  for(int i = 0 ; i < n ; i++){
    ll s , t ;
    cin >> s >> t ;
    w[i] = s ;
    if(i == n - 1) w[n] = t ;
  }
  ll dp[n+1][n+1] ;
  memset(dp,0,sizeof(dp)) ;
  for(int W = 2 ; W <= n ; W++){
    for(int l = 0 ; l < n ; l++){
      int r = l + W ;
      if(r > n) continue ;

      ll res = INF ;
      //if(W == 2) dp[l][r] = w[l] * w[l+1] * w[r] ;
      for(int mid = l ; mid < r - 1 ; mid++){
        res = min(res,dp[l][mid+1] + dp[mid+1][r] + w[l] * w[mid+1] * w[r]) ;
      }
      dp[l][r] = res ;
    }
  }
  cout << dp[0][n] << endl ;
}