#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX_M (ll)100
#define MAX_N (ll)1000
#define INF (ll)1e18

int n ;

int main(){
  cin >> n ;
  int A[n-1] ;
  for(int i = 0 ; i < n ; i++) cin >> A[i] ;
  ll dp[n-1][21] ;
  for(int i = 0 ; i < n - 1 ; i++) fill(dp[i],dp[i]+21,0) ;
  dp[0][A[0]] = 1 ;

  for(int i = 1 ; i < n - 1 ; i++){
    for(int j = 0 ; j < 21 ; j++){
      if(j + A[i] <= 20) dp[i][j+A[i]] += dp[i-1][j] ;
      if(j - A[i] >= 0) dp[i][j-A[i]] += dp[i-1][j] ;
    }
  }
  cout << dp[n-2][A[n-1]] << endl ;
}